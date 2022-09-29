#!/usr/bin/python3
import sys

# Ongaku Tsukuru - Super Famicom Compression
# by LuigiBlood

def fakecompress(data):
	# no real compression, testing
	out = []
	cmd = 0
	left = 16
	i = 0

	out.append(0xAA)
	out.append(0xAA)

	for b in data:
		left -= 1
		cmd >>= 1
		cmd |= 0x8000
		if left <= 0:
			out[i] = cmd & 0xFF
			out[i+1] = (cmd >> 8) & 0xFF
			i = len(out)
			left = 16
			cmd = 0
			out.append(0xAA)
			out.append(0xAA)
		out.append(b)
	
	# final
	if (left >= 2):
		cmd >>= 1
		cmd >>= 1
		cmd |= 0x8000
		left -= 2
		while left > 0:
			cmd >>= 1
			left -= 1
		out[i] = cmd & 0xFF
		out[i+1] = (cmd >> 8) & 0xFF

	out.append(0xFF)
	out.append(0xF8)
	out.append(0x00)

	return out

if len(sys.argv) == 3:
	f = open(str(sys.argv[1]), "rb")
	t = bytearray(f.read(-1))
	f.close()

	out = fakecompress(t)
	fw = open(str(sys.argv[2]), "wb")
	fw.write(bytearray(out))
	fw.close()
else:
	print("Usage: compress.py <Input Filename> <Output Filename>")
	