//Font (Main)

chr_font:
//$C20000
insert "./tmp/font.chr.cmp"

enqueue pc

seekAddr($82C064); dl chr_font
seekAddr($82C3AD); dl chr_font
seekAddr($82DC73); dl chr_font

dequeue pc
