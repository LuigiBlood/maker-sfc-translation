//Build Ongaku Tsukuru - Kanadeeru English
architecture snes.cpu

include "./asm/macros.asm"

output "./roms/OngakuTsukuruEN.sfc", create
seekAddr(0)
fill $200000,$FF	//Extend to 2MB
seekAddr(0)
insert "./roms/OngakuTsukuruJP.sfc"

include "./asm/insert.asm"
include "./asm/button.asm"

//Header
seekAddr(0xFFB0)
db "B1"		//ASCII
db "ZMCJ"	//Game Code
db $00, $00, $00, $00, $00, $00
db $00		//Expansion FLASH
db $00		//Expansion RAM
db $00		//Special Version
db $00
db "MUSIC MAKER PLAY IT! "
db $31		//HiROM+FastROM
db $02		//ROM+RAM+Battery
db $0B		//2MB ROM
db $05		//32KB RAM
db $01		//North America
db $33
db $10		//1.0
