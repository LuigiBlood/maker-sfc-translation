//Score Screen - Top Menu
//スコア - SCORE
//ミキサー - MIXER
//ジュークボックス - JUKEBOX
//データ - DATA
//かなでーる - Play it!

//C01930
chr_score_topmenu_bar:
insert "./tmp/score_topmenu_bar.chr.cmp"

map_score_topmenu_bar__score_red:
dw $51,$52,$53,$54,$55
dw $61,$62,$63,$64,$65

map_score_topmenu_bar__playitlogo:
dw $70,$71,$72,$73,$74
dw $75,$76,$77,$78,$79

enqueue pc

seekAddr($80AFE8); dl chr_score_topmenu_bar

seekAddr($C01D20) //32x2
//dw $50,$50,$51,$52,$53,$50,$54,$55,$56,$57,$50,$58,$59,$57,$5A,$5B,$68,$5A,$51,$50,$69,$6A,$6B,$50,$6C,$6D,$6E,$6F,$70,$71,$72,$50
//dw $5C,$5C,$5D,$5E,$5F,$5C,$60,$61,$62,$63,$5C,$64,$65,$63,$66,$67,$73,$66,$5D,$5C,$74,$63,$75,$5C,$76,$77,$78,$79,$7A,$7B,$7C,$5C

dw $50,$50, $51,$52,$53,$54,$55, $50, $56,$57,$58,$55,$54, $50, $59,$5A,$5B,$55,$5C,$53,$58, $50, $5D,$5E,$5F,$5E, $50,$50,$50,$50,$50, $50
dw $60,$60, $61,$62,$63,$64,$65, $60, $66,$67,$68,$65,$64, $60, $69,$6A,$6B,$65,$6C,$63,$68, $60, $6D,$6E,$6F,$6E, $60,$60,$60,$60,$60, $60

seekAddr($80AFF9); dl map_score_topmenu_bar__score_red,$7E3844; db 5,2

seekAddr($80B004); dl map_score_topmenu_bar__playitlogo,$7E3870+4; db 5,2

dequeue pc
