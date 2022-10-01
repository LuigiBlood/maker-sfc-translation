//Score Screen - UI Graphics - Track Numbers
//コード - CODE

//C01DC8
chr_score_ui_track:
insert "./tmp/score_ui_track.chr.cmp"

enqueue pc

seekAddr($80B020); dl chr_score_ui_track

dequeue pc
