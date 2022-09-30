//Score Screen - UI Graphics
//トラック - Track

//C8CA60
chr_score_ui:
insert "./tmp/score_ui.chr.cmp"

enqueue pc

seekAddr($80AFD7); dl chr_score_ui

dequeue pc
