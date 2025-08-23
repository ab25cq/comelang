make clean
make || exit 1

# Parse all test C files in sorted order
for f in test/*.c; do
  [ -f "$f" ] || continue
  ./cparse "$f" || exit 3
done
