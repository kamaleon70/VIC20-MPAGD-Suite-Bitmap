;----------------------------------------------
; Header
;----------------------------------------------

	.word load
load:
main:


; .VIC format


; Bitmap

	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FE,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$0F,$CF,$CF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$81,$81,$39,$3D,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$CF,$DC,$DC,$B1,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$0D,$0D,$C9,$F9,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$CF,$CF,$9F,$3F,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$F8,$F0,$E7,$E7,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$30,$10,$97,$97,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$3F,$1F,$1F,$9F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$C0,$C1,$FB,$FB,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$EF,$10,$F0,$E7,$E7,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$E0,$67,$6F,$68,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $38,$F8,$F0,$F4,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$C0
	.byte $C1,$FB,$FB,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$CF,$DF,$DF,$DF,$BE,$BE
	.byte $BE,$3C,$3C,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$39,$79,$67,$07,$0E,$0E,$E2
	.byte $E2,$F6,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$B3,$37,$2F,$2F,$4F,$4F,$4F,$40
	.byte $70,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F8,$FA,$F8,$F8,$F0,$F2,$16,$37,$F7
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$3F,$7F,$7F,$7F,$7F,$3F,$3F,$3F,$BF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$EF,$DF,$DF,$DF,$9E,$9E,$DC,$C1,$E3,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$97,$AF,$AC,$20,$01,$41,$CC,$DC,$DE,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$3F,$3F,$FF,$FF,$FF,$FF,$7F,$7F,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FB,$F3,$F3,$F3,$F7,$F7,$F7,$EF,$EF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$E7,$EE,$EC,$E1,$C1,$C1,$D8,$98,$9E,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$E0,$C7,$DF,$DF,$9F,$9E,$98,$80,$C6,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $EC,$EC,$CD,$DC,$80,$81,$3D,$3D,$7D,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FB
	.byte $F7,$F7,$F7,$E7,$E7,$E7,$EF,$EF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FC,$F8,$F0,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$E7,$F3,$F1,$F0,$E0,$00,$00,$00,$00,$00,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$E0,$C0,$00,$00,$00,$00,$00,$00,$00,$00,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$1F,$07,$07,$01,$01,$00,$00,$00,$00,$00,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FC,$E0,$C0,$C0,$40,$00,$00,$02,$FF,$FF,$FF,$FF,$FF,$FF,$C0
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$04,$FF,$FF,$FF,$FF,$FF,$FF,$1F,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$1F,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F0,$E0,$E0,$80,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$DF,$CF,$C1,$E1,$C0,$80,$00,$00,$00,$00,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$BF,$0F,$1F,$0C,$08,$00,$00,$00,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$3F,$1F,$0F,$0F,$07,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FE,$FE,$FE,$FE,$FE,$FC,$FC,$FC,$F0,$E0,$E0,$C0,$C0,$80,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$02
	.byte $02,$00,$00,$00,$04,$14,$60,$00,$00,$00,$00,$00,$00,$00,$02,$00,$00
	.byte $01,$00,$01,$E2,$E6,$41,$00,$00,$11,$18,$28,$4F,$7F,$BF,$1F,$FE,$38
	.byte $30,$80,$00,$03,$07,$06,$61,$19,$DF,$DE,$23,$F9,$FE,$BE,$9F,$1F,$04
	.byte $00,$00,$80,$E0,$00,$08,$90,$F0,$C0,$70,$D6,$CF,$EF,$3F,$1F,$0F,$00
	.byte $00,$38,$3C,$00,$00,$00,$10,$10,$A8,$69,$E9,$F5,$FD,$FF,$FF,$FF,$05
	.byte $00,$00,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FC,$F8
	.byte $F0,$F0,$F0,$F0,$E0,$C0,$C0,$C0,$C0,$C0,$C0,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$03,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$03,$07,$FF,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$38,$B0,$FD,$FF,$07,$07,$03,$01,$01,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$80,$00,$20,$FF,$FF,$FF,$FF,$FF,$FF,$7F,$7F,$3F,$3F
	.byte $3F,$1F,$1F,$0F,$0F,$0F,$FC,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8,$F8
	.byte $F8,$F8,$F8,$F8,$F8,$00,$00,$00,$00,$00,$00,$03,$03,$01,$01,$03,$00
	.byte $00,$00,$00,$00,$01,$03,$06,$07,$07,$87,$F3,$F1,$01,$81,$20,$D6,$C4
	.byte $2B,$49,$09,$E0,$E7,$7F,$EF,$FF,$FF,$FF,$DE,$D0,$05,$1C,$78,$60,$C5
	.byte $31,$17,$E3,$C1,$77,$70,$F1,$D1,$91,$30,$E7,$05,$01,$0B,$0B,$13,$1F
	.byte $09,$0C,$08,$C0,$3F,$4F,$70,$9D,$3D,$FB,$F6,$FF,$9C,$3D,$3B,$72,$0D
	.byte $60,$60,$01,$F7,$06,$08,$99,$39,$FA,$FB,$F7,$E3,$E1,$E9,$DE,$3F,$7C
	.byte $DC,$BC,$DC,$EC,$BE,$BC,$B8,$B2,$3F,$FF,$EF,$DF,$DF,$FF,$7E,$00,$00
	.byte $3C,$E6,$C3,$02,$E2,$1E,$07,$E0,$E0,$F7,$DF,$76,$F0,$B1,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FC,$F0,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$81,$01,$00,$00,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$7F,$3F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$C0,$C0,$C0,$81,$83,$C3,$C3,$C3,$C3,$C3
	.byte $C7,$C7,$C7,$C7,$C7,$C7,$07,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$EF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FE,$FF,$FE,$FE,$FF,$FF
	.byte $FD,$73,$FF,$C0,$90,$70,$60,$BA,$F8,$B8,$B0,$D0,$C8,$E8,$F4,$34,$E8
	.byte $6A,$6C,$07,$03,$03,$03,$03,$03,$03,$03,$03,$03,$01,$00,$00,$00,$00
	.byte $00,$F8,$F8,$F8,$FC,$FC,$FC,$FE,$FE,$FE,$FE,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$80,$C0,$C0,$C0,$00
	.byte $09,$09,$09,$19,$09,$01,$05,$01,$01,$05,$06,$03,$01,$01,$00,$33,$17
	.byte $13,$13,$83,$83,$03,$43,$03,$13,$D3,$F8,$FB,$B1,$80,$00,$09,$08,$00
	.byte $20,$25,$01,$01,$01,$15,$11,$1B,$1E,$92,$98,$1A,$18,$CF,$CE,$C6,$C7
	.byte $46,$2D,$0D,$0F,$2F,$2F,$2F,$2E,$6E,$2F,$AF,$BF,$03,$81,$81,$40,$E0
	.byte $F8,$78,$FE,$FA,$78,$80,$C0,$82,$09,$21,$00,$FF,$FF,$FF,$7E,$3C,$00
	.byte $00,$00,$02,$8F,$43,$00,$40,$1C,$22,$20,$DF,$D9,$D8,$50,$18,$3A,$10
	.byte $98,$DA,$D8,$FA,$FE,$6D,$4D,$2D,$2D,$FF,$FF,$FD,$FC,$FA,$00,$00,$08
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$FF,$FF,$FF,$FF,$FF,$7F,$1F,$06,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$FF,$FF,$FE,$F8,$E1,$C7,$07,$05,$00,$01
	.byte $00,$00,$01,$23,$4F,$1F,$C1,$D0,$38,$F8,$F8,$F8,$F3,$E0,$47,$8F,$3F
	.byte $3F,$FF,$FF,$FF,$FF,$41,$01,$01,$01,$01,$F8,$08,$26,$F8,$F8,$F8,$F0
	.byte $E0,$C0,$00,$1E,$BF,$BF,$DF,$DF,$EF,$6F,$6F,$7F,$1F,$0F,$0F,$07,$0F
	.byte $0F,$0F,$0F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$C7,$C7,$C3,$C3,$C7,$E3,$E3,$F3,$F3,$F3,$F3,$F9,$F9,$FD,$FD
	.byte $FD,$FF,$FF,$FF,$FF,$FF,$DF,$DE,$F8,$60,$E0,$C0,$C0,$E0,$F0,$F8,$F7
	.byte $FF,$E8,$E8,$FB,$C2,$84,$0E,$0F,$0F,$3F,$1F,$3F,$BF,$FF,$FF,$7F,$9F
	.byte $F8,$40,$00,$00,$80,$00,$00,$85,$0F,$2F,$1F,$8F,$07,$DF,$E7,$E8,$FC
	.byte $E2,$2C,$04,$08,$08,$38,$F0,$F8,$FE,$FC,$F8,$F6,$E8,$FE,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$FF,$FF,$FF,$FF
	.byte $FF,$7F,$7F,$7F,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$C0,$C0,$E0,$F0,$F0
	.byte $F0,$F8,$FC,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$80,$C0,$E0,$E0,$F8,$00,$00,$00,$00,$00,$00,$04
	.byte $00,$05,$05,$05,$01,$01,$01,$01,$00,$00,$08,$09,$01,$01,$01,$01,$01
	.byte $00,$0A,$08,$0C,$03,$00,$02,$02,$EA,$CC,$AC,$AF,$E3,$C2,$D9,$88,$9C
	.byte $1C,$1C,$0C,$09,$01,$00,$80,$00,$00,$C0,$F0,$BF,$EF,$7F,$01,$F0,$FD
	.byte $FE,$FE,$DF,$00,$11,$00,$00,$00,$00,$00,$F7,$FF,$FF,$FF,$08,$D4,$67
	.byte $FF,$C0,$00,$80,$C0,$2C,$24,$2C,$68,$C9,$C9,$F9,$98,$00,$80,$20,$20
	.byte $00,$0F,$00,$00,$00,$00,$00,$00,$00,$10,$10,$10,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$01,$01,$03,$03,$03,$03
	.byte $03,$07,$3F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $26,$36,$3E,$BA,$C1,$E3,$E7,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$1F
	.byte $1F,$3F,$3F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FC,$FC,$FC
	.byte $FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F7,$7B,$7B,$7F
	.byte $BF,$1F,$7F,$1F,$9F,$9F,$8E,$DE,$FF,$EE,$E6,$F7,$EF,$EF,$DA,$D0,$84
	.byte $2C,$3C,$3C,$7C,$FC,$FC,$FD,$FC,$FB,$F0,$F0,$E7,$73,$51,$91,$82,$08
	.byte $20,$09,$01,$88,$99,$88,$05,$E0,$00,$1E,$F4,$F4,$F8,$F6,$70,$02,$51
	.byte $80,$60,$00,$88,$68,$80,$10,$00,$80,$01,$81,$03,$03,$83,$03,$81,$01
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$1F,$1F,$07,$07,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$F8,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$00,$00,$80,$F0,$F0,$F0,$F8,$F8,$F8,$F8,$F8,$F8
	.byte $FE,$FE,$FC,$FC,$00,$80,$03,$82,$05,$44,$44,$40,$C0,$C0,$C0,$45,$66
	.byte $20,$22,$24,$01,$03,$02,$30,$04,$0C,$08,$08,$08,$08,$00,$00,$00,$00
	.byte $00,$00,$00,$FA,$7F,$00,$02,$00,$00,$00,$00,$01,$01,$01,$01,$03,$03
	.byte $03,$00,$00,$D0,$00,$80,$00,$00,$70,$F8,$F0,$F0,$F0,$C0,$80,$80,$40
	.byte $00,$00,$00,$30,$60,$11,$17,$17,$17,$07,$06,$00,$01,$0F,$FF,$60,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$0F,$07
	.byte $1F,$1F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$F7,$FB,$F9,$F9,$FD,$FD,$FE,$FE,$FE
	.byte $FE,$FE,$FE,$FE,$FE,$FC,$F8,$CB,$FC,$FC,$FC,$F9,$FB,$FF,$7F,$3F,$8F
	.byte $4F,$4F,$46,$70,$5F,$5F,$FF,$03,$05,$10,$FC,$FF,$FF,$FF,$FE,$FC,$E8
	.byte $C0,$00,$00,$C0,$E0,$00,$9C,$80,$08,$40,$20,$C0,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$FF,$7F,$7F,$7F,$7F,$7F,$7F,$3F,$3F,$0F,$0F,$03,$00,$00,$00
	.byte $00,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FC,$E0,$E0,$E0,$E0,$E0,$60,$00,$00
	.byte $FC,$FA,$F2,$F6,$C6,$85,$05,$04,$0C,$2E,$1E,$0E,$0E,$0F,$0B,$03,$24
	.byte $82,$C2,$C0,$80,$50,$40,$50,$20,$28,$28,$00,$00,$80,$00,$00,$00,$10
	.byte $10,$10,$10,$00,$10,$40,$00,$20,$20,$00,$00,$20,$00,$00,$06,$02,$05
	.byte $04,$00,$10,$00,$04,$20,$40,$08,$02,$00,$00,$00,$01,$00,$0C,$0A,$10
	.byte $34,$2C,$48,$70,$90,$24,$20,$40,$00,$40,$00,$00,$00,$80,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$04,$04,$04,$08,$10,$3F,$3F,$3F,$3F,$3F,$3F,$3F
	.byte $3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$3F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FE,$FC,$F8,$E0,$FF,$FF,$FF,$FF,$FC,$F8,$F0,$E0,$C0,$80,$00,$80,$20
	.byte $00,$00,$00,$E0,$E0,$80,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$7F,$7F,$7F,$7F,$4F,$0F,$0F,$1A,$05,$01,$00,$00,$00,$00,$00
	.byte $00,$E0,$F8,$FC,$F8,$FC,$FE,$FE,$F0,$F0,$F8,$00,$00,$04,$00,$10,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$02,$00,$01,$05,$04,$04,$00,$00,$01,$00,$00,$00
	.byte $70,$E0,$1A,$5B,$5D,$55,$50,$40,$00,$00,$00,$00,$60,$0C,$05,$00,$00
	.byte $00,$00,$00,$00,$00,$16,$00,$00,$00,$00,$00,$00,$00,$00,$60,$5A,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$10,$00,$00,$24,$00,$00,$60,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $04,$0C,$10,$11,$00,$24,$29,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$20,$00,$40,$2F,$14,$01,$6A,$15,$6A,$2A,$20
	.byte $8D,$0A,$00,$0D,$42,$1F,$1F,$0F,$8F,$07,$07,$43,$87,$07,$47,$4F,$0F
	.byte $8F,$4F,$0F,$8F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FE,$FE,$FE,$FC,$F8,$E0,$C0
	.byte $80,$FF,$FF,$FE,$FC,$F8,$F0,$C0,$00,$00,$10,$30,$20,$11,$30,$10,$10
	.byte $80,$80,$00,$10,$00,$10,$00,$A0,$40,$00,$80,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$3A,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$40,$00,$00,$00,$00,$08,$00,$00,$00
	.byte $00,$00,$08,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$01,$0F,$3F,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$1F,$FF,$FF,$FF,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$03,$FF,$FF,$FF,$FF,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$E0,$E0,$80,$80,$C0,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$2A,$00,$08,$2F,$0F,$0C,$28,$00,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$40,$80,$00,$40,$80,$20,$20,$00,$40,$00,$00,$00,$00,$00,$00
	.byte $00,$02,$1C,$04,$0A,$01,$08,$00,$00,$00,$00,$01,$07,$FF,$FF,$FB,$EF
	.byte $8F,$87,$07,$47,$00,$00,$02,$03,$33,$78,$FC,$FF,$FF,$BF,$7F,$FF,$FF
	.byte $FF,$FF,$FF,$3F,$3F,$FF,$06,$50,$10,$00,$00,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $F6,$F0,$78,$30,$80,$40,$00,$00,$00,$FF,$FF,$FF,$FD,$FF,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$01,$07,$FF,$FF,$FF,$FF,$FF,$FF,$20,$00,$00,$00
	.byte $00,$00,$12,$7C,$FE,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$00,$00,$81,$FF,$FF,$FF,$FF,$00,$00,$00,$00,$00,$00
	.byte $00,$00,$00,$00,$0F,$FF,$FF,$FF,$FF,$FF,$00,$00,$00,$00,$00,$00,$00
	.byte $03,$0F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$00,$00,$00,$00,$00,$0F,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$00,$00,$00,$0F,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$01,$07,$1F,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$FF,$80,$E0,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$FF,$00,$03,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $FF,$00,$F8,$FC,$FC,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
	.byte $00,$00,$00,$00,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00
	.byte $00,$00,$07,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$01
	.byte $0F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$00,$81,$C7
	.byte $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF