#!/bin/bash
#usage: ./mkbootimg elle kernel ramdisk > kernel

function writeHex {	#print to stdout a hexadecimal number as 4 bytes, little endian
	
	declare -i c v a

	v=$1

	for a in {0..3}
	do
		c=$v%256
		v=$v/256

		echo -ne "\x`printf "%02x" $c`"
	done
}


declare -i sSz kSz dSz pSz tSz partSz blks padSz

eSz=($(ls -l "$1" | awk '{print $5}'))
kSz=($(ls -l "$2" | awk '{print $5}'))
dSz=($(ls -l "$3" | awk '{print $5}'))

pSz=$eSz+$kSz
tSz=$pSz+$dSz+512

partSz=$tSz+1048575
blks=$partSz/1048576
partSz=$blks*1048576
padSz=$partSz-$tSz

printf "Using %d bytes ELLE, %d byte kernel, and %d byte ramdisk\n Kernel package is %d bytes\n total size: %d bytes\n rounding to %d bytes (%d 1MB blocks) using %d bytes of padding\n" $eSz $kSz $dSz $pSz $tSz $partSz $blks $padSz >&2

writeHex $eSz
writeHex $kSz
writeHex $dSz
writeHex 0	#reserved
writeHex 0	#reserved
writeHex 0	#reserved
writeHex 0	#reserved
writeHex 0	#reserved
echo -n "ELLE-format BL+Kernel+ramdisk package"
dd if=/dev/zero bs=443 count=1 2>/dev/null

cat "$1" "$2" "$3"

dd if=/dev/zero bs=$padSz count=1 2>/dev/null
