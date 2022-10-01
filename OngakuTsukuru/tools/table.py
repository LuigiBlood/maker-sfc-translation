#!/usr/bin/python3
import sys

# Table Array Output for bass
# by LuigiBlood

def table(data, offset, size, bits, endian, width = 16):
	out = ""
	for i in range(0, size, width * bits / 8):
		str = ""
		if bits == 8:
			str = "db "
		elif bits == 16:
			str = "dw "
		
		for j in range(0, width * bits / 8, bits / 8):
			if j != 0:
				str += ","
			str += "$"
			rng = range(bits / 8);
			if endian == "little":
				rng = range((bits / 8)-1, -1, -1)
			for k in rng:
				str += format(data[offset+i+j+k], "02X")
		
		str += "\n"
		out += str
	return out

if len(sys.argv) == 7:
	f = open(str(sys.argv[1]), "rb")
	t = bytearray(f.read(-1))
	f.close()
	size = int(sys.argv[3])*int(sys.argv[4])*(int(sys.argv[5])/8)
	out = table(t, int(sys.argv[2], base=16), size, int(sys.argv[5]), str(sys.argv[6]), int(sys.argv[3]))
	print(out)
else:
	print("Usage: table.py <Input Filename> <Hex Offset> <Width> <Height> <Bits> <Endian>")
