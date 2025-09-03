#!/usr/bin/env bash
set -euo pipefail

usage() {
  cat <<'EOF'
Usage: tests/scripts/test_linux_headers.sh [--root DIR] [--jobs N] [--defs "A=1 B=1"] [--sdkroot DIR] [--keep-outputs]

Runs ccpp against a large set of Linux headers under --root (default: /usr/include).
Creates per-header tiny sources, preprocesses them, and summarizes failures.

Options:
  --root DIR        Header root to scan (default: /usr/include)
  -j, --jobs N      Parallel jobs (default: number of CPUs or 4)
  --defs STR        Extra -D definitions (space-separated), e.g. "_GNU_SOURCE=1 _DEFAULT_SOURCE=1"
  --sdkroot DIR     Sets SDKROOT for ccpp include search (optional sysroot)
  --keep-outputs    Keep all .i outputs (default: only keep .err logs)

Example:
  tests/scripts/test_linux_headers.sh --defs "_GNU_SOURCE=1 _DEFAULT_SOURCE=1" -j 8
  tests/scripts/test_linux_headers.sh --root /opt/sysroot/usr/include --sdkroot /opt/sysroot \
      --defs "__riscv=1 __riscv_xlen=64 _GNU_SOURCE=1" -j 8
EOF
}

ROOT=/usr/include
JOBS=${JOBS:-}
DEFS=""
SDKROOT_VAL=""
KEEP_OUTPUTS=0

while [[ $# -gt 0 ]]; do
  case "$1" in
    --root) ROOT="$2"; shift 2;;
    -j|--jobs) JOBS="$2"; shift 2;;
    --defs) DEFS="$2"; shift 2;;
    --sdkroot) SDKROOT_VAL="$2"; shift 2;;
    --keep-outputs) KEEP_OUTPUTS=1; shift;;
    -h|--help) usage; exit 0;;
    *) echo "Unknown option: $1" >&2; usage; exit 2;;
  esac
done

if [[ ! -d "$ROOT" ]]; then
  echo "Header root not found: $ROOT" >&2
  exit 1
fi

# Determine jobs
if [[ -z "${JOBS}" ]]; then
  if command -v nproc >/dev/null 2>&1; then
    JOBS=$(nproc)
  else
    JOBS=4
  fi
fi

timestamp=$(date +%Y%m%d_%H%M%S 2>/dev/null || echo now)
OUT_BASE="tests/out/linux_scan_${timestamp}"
OUT_DIR="$OUT_BASE/outs"
LOG_DIR="$OUT_BASE/logs"
SRC_DIR="$OUT_BASE/srcs"
mkdir -p "$OUT_DIR" "$LOG_DIR" "$SRC_DIR"

mapfile -t HEADERS < <(cd "$ROOT" && find . -type f -name '*.h' -print | LC_ALL=C sort)
TOTAL=${#HEADERS[@]}
echo "Discovered $TOTAL headers under $ROOT"

# Compose flags
INC_FLAGS=( -I "$ROOT" )
DEF_FLAGS=()
if [[ -n "$DEFS" ]]; then
  # shellcheck disable=SC2206
  DEF_ARR=( $DEFS )
  for d in "${DEF_ARR[@]}"; do
    DEF_FLAGS+=( -D"$d" )
  done
fi

run_one() {
  local rel="$1"
  local base="${rel#./}"
  local src="$SRC_DIR/${base//\//__}.c"
  local out="$OUT_DIR/${base//\//__}.i"
  local err="$LOG_DIR/${base//\//__}.err"
  mkdir -p "$(dirname "$src")" "$(dirname "$out")" "$(dirname "$err")"
  printf '#include <%s>\nint main(void){return 0;}\n' "$base" > "$src"
  if [[ -n "$SDKROOT_VAL" ]]; then
    SDKROOT="$SDKROOT_VAL" ./ccpp "${INC_FLAGS[@]}" "${DEF_FLAGS[@]}" "$src" > "$out" 2> "$err" || true
  else
    ./ccpp "${INC_FLAGS[@]}" "${DEF_FLAGS[@]}" "$src" > "$out" 2> "$err" || true
  fi
  if [[ ! -s "$err" ]]; then
    rm -f "$err"
    if [[ $KEEP_OUTPUTS -eq 0 ]]; then rm -f "$out"; fi
    echo OK "$base"
  else
    echo FAIL "$base"
  fi
}

export -f run_one
export ROOT OUT_DIR LOG_DIR SRC_DIR SDKROOT_VAL

printf '%s\n' "${HEADERS[@]}" | xargs -I{} -P "$JOBS" bash -c 'run_one "$@"' _ {}

FAILS=$(find "$LOG_DIR" -type f -name '*.err' | wc -l | awk '{print $1}')
OKS=$(( TOTAL - FAILS ))
echo "Summary: OK=$OKS FAIL=$FAILS TOTAL=$TOTAL"
if [[ "$FAILS" -gt 0 ]]; then
  echo "Sample failures:" >&2
  find "$LOG_DIR" -type f -name '*.err' | head -n 20 | while read -r f; do
    echo "=== $(basename "$f")" >&2
    sed -n '1,10p' "$f" >&2 || true
  done
fi

echo "Outputs in: $OUT_BASE"

