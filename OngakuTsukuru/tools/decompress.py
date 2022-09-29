#!/usr/bin/python3
import sys

# Ongaku Tsukuru - Super Famicom Decompression
# by LuigiBlood

def decompress(data, offset):
	i = offset
	out = []

	left = 16
	cmd = data[i] + (data[i + 1] << 8)
	i += 2
	check = []
	while True:
		# get info
		check.append(cmd & 1)
		cmd >>= 1
		left -= 1

		if left <= 0:
			# load next cmd
			left = 16
			cmd = data[i] + (data[i + 1] << 8)
			i += 2

		if len(check) == 1 and check[0] == 1:
			# copy byte
			out.append(data[i])
			i += 1
			check = []
		elif len(check) == 2 and check[0] == 0 and check[1] == 1:
			# relative long copy
			address = ((data[i] + ((data[i + 1] & 0xF8) << 5)) ^ 0x1FFF) + 1
			length = data[i + 1] & 7
			i += 2
			if length == 0:
				longlength = data[i]
				i += 1
				if longlength == 0:
					print("Compressed Size: " + hex(i - offset))
					print("Decompressed Size: " + hex(len(out)))
					return out
				else:
					longlength += 1
					while longlength > 0:
						out.append(out[-address])
						longlength -= 1
			else:
				length += 2
				while length > 0:
					out.append(out[-address])
					length -= 1
			check = []
		elif len(check) == 4 and check[0] == 0 and check[1] == 0:
			# relative short copy
			address = (data[i] ^ 0xFF) + 1
			i += 1
			length = check[3] + (check[2] << 1) + 2
			while length > 0:
				out.append(out[-address])
				length -= 1
			check = []

	return out

if len(sys.argv) == 4:
	f = open(str(sys.argv[1]), "rb")
	t = bytearray(f.read(-1))
	f.close()

	out = decompress(t, int(sys.argv[2], base=16))
	fw = open(str(sys.argv[3]), "wb")
	fw.write(bytearray(out))
	fw.close()
else:
	print("Usage: decompress.py <Input Filename> <Hex Offset> <Output Filename>")
