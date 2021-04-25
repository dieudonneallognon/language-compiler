; Calculette
	const ax,program:debut
	jmp ax

:program:debut
; Préparation de la pile
	const bp,pile
	const sp,pile
	const ax,2
	sub sp,ax
; Ajout du nombre 5
	const ax,5
	push ax
; Ajout du nombre 2
	const ax,2
	push ax
; Debut modulo
	pop ax
	pop bx
	cp cx,bx
	const dx,err:div0
	div bx,ax
	jmpe dx
	mul bx,ax
	sub cx,bx
	push cx
; Pour afficher la valeur calculée, qui se trouve normalement en sommet de pile
	cp ax,sp
	callprintfd ax
	pop ax
	end
; La zone de pile
:pile
@int 0

; Définition Chaine de charactère boolean faux
:bool:str:faux
@string "false"

; Définition Chaine de charactère boolean true
:bool:str:vrai
@string "true"

; Définition chaine de charactère erreur de division par zéro
:err:div0:msg
@string "Erreur: division par 0"

; Code cible erreur de division par zéro
:err:div0
	const ax,err:div0:msg
	callprintfs ax
	end
