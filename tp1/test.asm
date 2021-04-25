; Calculette
	const ax,program:debut
	jmp ax

:program:debut
; Préparation de la pile
	const bp,pile
	const sp,pile
	const ax,2
	sub sp,ax
; Saut à fin définition printTrue()
	const dx,fun:def:fin:printTrue
	jmp dx

; Code de définition et d'initialisation du paramètre a de printTrue()
:var:fun:param:init:printTrue:1
	const ax,var:local:val:printTrue:a
	jmp ax

:var:local:printTrue:a
@int 0
:var:local:val:printTrue:a
	pop ax
	const bx,var:local:printTrue:a
	storew ax,bx
	const cx,var:fun:param:init:fin:printTrue:1
	jmp cx

; Code de définition du paramètre b de printTrue()
:var:fun:param:init:printTrue:2
	const ax,var:local:val:printTrue:b
	jmp ax

:var:local:printTrue:b
@int 0
:var:local:val:printTrue:b
	pop ax
	const bx,var:local:printTrue:b
	storew ax,bx
	const dx,var:fun:param:init:fin:printTrue:2
	jmp dx

:fun:def:printTrue
; Saut à l'initialisation du paramètre 2 de printTrue()
	const dx,var:fun:param:init:printTrue:2
	jmp dx

:var:fun:param:init:fin:printTrue:2
; Saut à l'initialisation du paramètre 1 de printTrue()
	const dx,var:fun:param:init:printTrue:1
	jmp dx

:var:fun:param:init:fin:printTrue:1
; Début de l'exécution de printTrue()
; Ajout du nombre 1
	const ax,1
	push ax
; Saut à la fin de l'exécution du code de printTrue()
:fun:def:fin:printTrue
; Ajout du nombre 1
	const ax,1
	push ax
; Ajout du nombre 2
	const ax,2
	push ax
; Saut à la défintion de printTrue() pour exécution
	const dx,fun:def:printTrue
	jmp dx

:fun:def:finprintTrue	pop
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
