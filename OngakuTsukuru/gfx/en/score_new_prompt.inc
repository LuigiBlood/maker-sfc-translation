//Score Screen - Create New Score - Prompt
//しょきか - Reset?
//じっこう - Yes
//ちゅうし - No

//$CBAC10
chr_score_new_prompt:
insert "./tmp/score_new_prompt.chr.cmp"

enqueue pc

//Replace Address
seekAddr($828BB0)
	lda.b #(chr_score_new_prompt >> 0)
	ldy.b #(chr_score_new_prompt >> 8)
	ldx.b #(chr_score_new_prompt >> 16)

//Tilemap (16x8)
seekAddr($CBAFC0)
dw $C1,$C2,$C2,$C2,$C2,$C2,$C2,$C2,$C2,$C2,$C2,$C2,$C2,$C2,$C2,$C3
dw $CF,$C0,$C0,$C0,$C4,$C5,$C6,$C7,$C8,$C9,$CA,$CB,$C0,$C0,$C0,$D0
dw $CF,$C0,$C0,$C0,$D1,$D2,$D3,$D4,$D5,$D6,$D7,$D8,$C0,$C0,$C0,$D0
dw $CF,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$D0
dw $CF,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$D0
dw $CF,$C0,$D9,$DA,$DB,$DC,$DD,$C0,$C0,$DE,$DF,$E0,$E1,$E2,$C0,$D0
dw $CF,$C0,$E3,$E4,$E5,$E6,$E7,$C0,$C0,$E8,$E9,$EA,$EB,$EC,$C0,$D0
dw $CC,$CD,$CD,$CD,$CD,$CD,$CD,$CD,$CD,$CD,$CD,$CD,$CD,$CD,$CD,$CE

dequeue pc
