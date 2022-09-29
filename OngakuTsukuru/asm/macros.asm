//Macros

//Seek HiROM Address (half of the space is dedicated to Memory Pack, so 2MB is the max)
macro seekAddr(n) {
  origin ({n} & $1FFFFF)
  base {n}
}

//Based on origin
macro bound_check(n) {
	if origin() > {n} {
		error "ERROR, OVERWRITING ANOTHER FILE"
	}
}

//Based on SNES address
macro size_check(b, n) {
	if pc() > ({b} + {n}) {
		error "ERROR, OVERSIZED"
	}
}
