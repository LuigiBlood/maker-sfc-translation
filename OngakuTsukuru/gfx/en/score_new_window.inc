//Score Screen - Create New Score - Window
//しょきせってい - NEW SCORE
//コード - CODE
//トラック - Track
//じどうきゅうふ - Auto Rest
//じっこう - OK
//ちゅうし - Cancel

//$C03648
chr_score_new_window:
insert "./tmp/score_new_window.chr.cmp"

enqueue pc

//Replace Address
seekAddr($828BE1)
	lda.b #(chr_score_new_window >> 0)
	ldy.b #(chr_score_new_window >> 8)
	ldx.b #(chr_score_new_window >> 16)

//Tilemap (26x22)
seekAddr($C031D0)
dw $00C1,$00C2,$00C2,$00C2,$00C2,$00C2,$00C2,$00C3,$00C4,$00C4,$00C4,$00C4,$00C4,$00C4,$00C4,$00C4,$00C4,$00C4,$0120,$00C2,$00C2,$00C2,$00C2,$00C2,$00C2,$0121
dw $00C5,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C7,$00C8,$00C9,$00CA,$00CB,$00CC,$00CD,$00CE,$00CF,$00D0,$00D1,$012A,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$012B	//NEW SCORE
dw $00C5,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C7,$00D2,$00D3,$00D4,$00D5,$00D6,$00D7,$00D8,$00D9,$00DA,$00DB,$012A,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$012B
dw $00DC,$00DD,$00DD,$00DD,$00DD,$00DD,$01BD,$00DE,$00E0,$00E0,$00E0,$00E0,$00E0,$00E0,$00E0,$00DF,$00E0,$00E0,$0138,$00DD,$00DD,$00DD,$00DD,$00DD,$00DD,$0139

dw $00E1,$00E2,$00E3,$00E3,$00E3,$00E4,$00E5,$00E2,$00E3,$00E3,$00E3,$00E3,$00E3,$00E3,$00E4,$00E5,$00E2,$00E3,$00E3,$00E3,$00E3,$00E3,$00E3,$00E3,$00E4,$013A
dw $00E1,$00E6,$00E7,$00E7,$00E7,$00E8,$00E5,$00E6,$00E7,$00E7,$00E7,$00E7,$00E7,$00E7,$00E8,$00E5,$013F,$0140,$00E7,$00E7,$00E7,$00E7,$00E7,$0141,$0142,$013A
dw $00E1,$00E9,$00EA,$00EA,$00EA,$00EB,$00E5,$00EC,$00EA,$00EA,$00EA,$00EA,$00EA,$00EA,$00EB,$00E5,$00E6,$00E7,$0147,$0148,$0148,$0148,$0149,$00E7,$00E8,$013A
dw $00E1,$00E9,$00EA,$00EA,$00EA,$00EB,$00E5,$00EC,$00EA,$00EA,$00EA,$00EA,$00EA,$00EA,$00EB,$00E5,$013F,$0140,$00E7,$00E7,$00E7,$00E7,$00E7,$0141,$0142,$013A
dw $00E1,$00ED,$00EE,$00EE,$00EE,$00EF,$00E5,$00F0,$00EE,$00EE,$00EE,$00EE,$00EE,$00EE,$00EF,$00E5,$00F1,$00F2,$00F2,$00F2,$00F2,$00F2,$00F2,$00F2,$00F3,$013A
dw $00E1,$00F1,$00F2,$00F2,$00F2,$00F3,$00E5,$00F1,$00F2,$00F2,$00F2,$00F2,$00F2,$00F2,$00F3,$00F4,$00F6,$00F6,$00F6,$00F6,$00F6,$00F6,$00F6,$00F6,$00F6,$0156
dw $00F5,$00F6,$00F6,$00F6,$00F6,$00F6,$00F7,$00F6,$00F6,$00F6,$00F6,$00F6,$00F6,$00F6,$00F6,$00F8,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$012B
dw $00C5,$00F9,$00FA,$00C6,$00FB,$00FC,$00C6,$00C6,$00FD,$00FE,$00C6,$00FF,$0100,$00C6,$00C6,$0101,$0157,$015E,$015F,$0160,$0161,$0162,$0163,$0164,$0165,$012B

dw $00C5,$0102,$0103,$00C6,$0104,$0105,$00C6,$00C6,$0106,$0107,$00C6,$0108,$0109,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$0126,$0127,$0128,$0129,$012B	//1234 CODE
dw $00C5,$010A,$010B,$00C6,$010C,$010D,$00C6,$00C6,$010E,$010F,$00C6,$0110,$0111,$00C6,$00C6,$0112,$0158,$015E,$015F,$0160,$0161,$0171,$0172,$0173,$0174,$012B

dw $00C5,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$012B

dw $00C5,$0114,$0115,$0116,$0117,$0118,$0119,$0119,$011A,$011B,$011C,$011D,$011E,$00C6,$00C6,$00C6,$00C6,$01A4,$01A5,$01A6,$01A7,$01A8,$01A9,$01AA,$01AB,$012B	//Track
dw $00C5,$0180,$0181,$0182,$0183,$0184,$0185,$0185,$0186,$0187,$0188,$0189,$018A,$00C6,$00C6,$0112,$0158,$01AC,$01AD,$01AE,$01AF,$01B0,$01B1,$01B2,$01B3,$012B	//Auto Rest
dw $00C5,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$012B

dw $00C5,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$018C,$018D,$018E,$018F,$0190,$00C6,$00C6,$0191,$0192,$01B6,$01B7,$01B8,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$012B	//Buttons
dw $00C5,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$0193,$0194,$0195,$0196,$0197,$00C6,$00C6,$0198,$0199,$01B9,$01BA,$01BB,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$012B

dw $00C5,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$00C6,$012B
dw $019A,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$019B,$01BC

dequeue pc
