%{
  #include <ctype.h>
  #include <stdlib.h>
  #include <stdio.h>
  #include <limits.h>
  #include <stdarg.h>
  #include "stable.h"

  int yylex(void);
  void yyerror(char const *);
  #define STACK_CAPACITY 50
  #define MAXBUF 500
  #define OK 1
  #define ERR 0
  #define T_BOOL 2
  #define T_INT 3

  #define PROGRAM_START			"program:debut"

  #define NEG_VRAI				"neg:vrai"
  #define NEG_FAUX				"neg:faux"
  #define NEG_FIN				"neg:fin"

  #define OR_VRAI				"or:vrai"
  #define OR_FAUX				"or:faux"
  #define OR_FIN				"or:fin"

  #define EQ_FIN 				"eq:fin"
  #define EQ_VRAI 				"eq:vrai"
  #define EQ_FAUX 				"eq:faux"

  #define DIF_FIN 				"d"IF_FIN""
  #define DIF_VRAI 				"dif:vrai"
  #define DIF_FAUX 				"dif:faux"

  #define INF_FIN 				"inf:fin"
  #define INF_VRAI 				"inf:vrai"
  #define INF_FAUX 				"inf:faux"

  #define SUP_FIN 				"sup:fin"
  #define SUP_VRAI 				"sup:vrai"
  #define SUP_FAUX 				"sup:faux"

  #define INF_EQ_FIN 			"inf:eq:fin"
  #define INF_EQ_VRAI 			"inf:eq:vrai"
  #define INF_EQ_FAUX 			"inf:eq:faux"

  #define SUP_EQ_FIN 			"sup:eq:fin"
  #define SUP_EQ_VRAI 			"sup:eq:vrai"
  #define SUP_EQ_FAUX 			"sup:eq:faux"

  #define FUN_DEF 				"fun:def"
  #define FUN_DEF_FIN			"fun:def:fin"

  #define VAR_GLOBAL			"var:global"
  #define VAR_GLOBAL_VAL 		"var:global:val"

  #define VAR_LOCAL				"var:local"
  #define VAR_LOCAL_VAL 		"var:local:val"

  #define VAR_PARAM 			"var:fun:param"
  #define VAR_PARAM_VAL 		"var:fun:param:val"

  #define VAR_PARAM_INIT		"var:fun:param:init"
  #define VAR_PARAM_INIT_FIN	"var:fun:param:init:fin"

  #define ERR_DIV_ZERO			"err:div0"
  #define ERR_DIV_ZERO_MSG		"err:div0:msg"

  #define BOOL_STR_FALSE		"bool:str:faux"
  #define BOOL_STR_TRUE			"bool:str:vrai"

  #define PRINT_TRUE			"bool:affichage:vrai"
  #define PRINT_FALSE			"bool:affichage:faux"
  #define PRINT_FIN				"bool:affichage:fin"

  #define IF_FIN				"if:fin"
  #define IF_TEST_NEG			"if:test:neg"
  #define DEBUT_WHILE			"debut:while"

  #define WHILE_FAUX			"while:faux"
  #define WHILE_FIN				"fin:while"

  char buffer1[MAXBUF];
  char buffer2[MAXBUF];

  static unsigned int new_label_number();
  static void create_label(char *buf, size_t buf_size, const char *format, ...);
  void fail_with(const char *format, ...);

  symbol_table_entry* funDef = NULL;

%}
//%define api.value.type { int }
%union { int entier; char* chaine; }

%token ID 
%token VOID_LEX
%token INT_LEX NUMBER
%token BOOL_LEX TRUE FALSE
%token AND OR NEG
%token IF WHILE ELSE NON_ELSE
%token PRINT RETURN
%token EQ DIF SUP SUP_EQ INF INF_EQ

%start lignes


%left OR
%left AND
%left EQ SUP INF SUP_EQ INF_EQ
%left '+' '-'
%left '*' '/' '%'
%left NEG
%precedence NON_ELSE
%precedence ELSE

%type <entier> expr NUMBER decl type largs largV sdecl sdeclV instr sinstrV sinstr lexpr lexprV blocinstr
%type <chaine> ID

%%
lignes:
  lignes error '\n'     {yyerrok;}
| ligne error '\n' 	{yyerrok; }
| error '\n'           	{yyerrok; }
| lignes ligne '\n'
| lignes '\n'
| ligne '\n'
| '\n'
;

ligne:
  instr
| decl
| deffun
;

fixif : %empty
{
	unsigned int number = new_label_number();
	$<entier>$ = number;
	printf("; If No %d\n"
	"\tpop ax\n"
	"\tconst bx,0\n"
	"\tconst cx,"IF_TEST_NEG":%d\n"
	"\tcmp ax,bx\n"
	"\tjmpc cx\n"
	, number, number);
};

type :
  BOOL_LEX 	{ $$ = BOOL_T; }
| INT_LEX	{ $$ = INT_T; }
| VOID_LEX	{ $$ = VOID_T; }
;

/* ---- Langage de traitement de la d??finition du fontion ---- */
deffun :
 type ID 	{

			// V??rifier qu'aucune fontion n'est en analyse
				if (funDef != NULL) {
					fail_with("Erreur syntaxique: d??finition de fonction dans l'espace locale de %s() \n\n", funDef->name);
				}
			// V??rification de l'unicit?? de l'identifiant de la fonction
				funDef = search_symbol_table($2);
				if (funDef != NULL) {
					fail_with("Erreur: %s() est d??j?? d??fini\n\n", $2);
				}

			/* Ajout de l'identifiant de la fontion dans la
			table des symboles et pr??paration du traitement 
			de la d??finition de la fontion */
				funDef = new_symbol_table_entry($2);
				funDef->class = FUNCTION;
				funDef->nParams = 0;
				funDef->nLocalVariables = 0;
				funDef->desc[0] = $1;
				printf(
					"; Saut ?? fin d??finition %s()\n"
					"\tconst dx,"FUN_DEF_FIN":%s\n"
					"\tjmp dx\n\n",
				funDef->name,
				funDef->name);

			} '(' largV ')' {
					printf(":"FUN_DEF":%s\n", $2);

				for (int i = funDef->nParams; i > 0 ; i--) {
					printf(
						"; Saut ?? l'initialisation du param??tre %d de %s()\n"
						"\tconst dx,"VAR_PARAM_INIT":%s:%d\n"
						"\tjmp dx\n\n"
						":"VAR_PARAM_INIT_FIN":%s:%d\n",
					i, funDef->name,
					funDef->name, i,
					funDef->name, i
					);
				}
				printf(
					"; D??but de l'ex??cution de %s()\n",
				funDef->name);

			} blocinstr {

			/* Fin de traitement de la d??finition de la fonction donc
			 lib??ration  des ressources */
				for (int i = 0; i < funDef->nParams; i++){
					free_first_symbol_table_entry();
				}
				printf(
					"; Saut ?? la fin de l'ex??cution du code de %s()\n"
					":"FUN_DEF_FIN":%s\n",
				funDef->name,
				funDef->name);
				funDef = NULL;
			};

/* ---- Langage de traitement de la liste des arguments d'une fonction ---- */
largV :
  %empty		{ $$ = 0; }
| largs			{ $$ = $1; };

/* ---- Langage de traitement d'un argument d'une fonction ---- */
largs :
// Cas d'argument unique
  type ID			{
					// V??rification de l'unicit?? de l'identifiant de l'argument
						symbol_table_entry* funArg = search_symbol_table($2);
						if (funArg != NULL){
							fail_with(
								"Erreur: %s est d??j?? d??fini dans %s()\n\n",
							$2, funDef->name);
						}

					/* Ajout de l'identifiant de l'argument dans la
					table des symboles */
						funArg =  new_symbol_table_entry($2);
						funArg->class = LOCAL_VARIABLE;
						funArg->desc[0] = $1;

					/* Mise ?? jour des informations de d??finition de
					la fontion dans la table des symboles */
						funDef->desc[funDef->nParams] = $1;
						funDef->nParams++;

						printf(
							"; Code de d??finition et d'initialisation du param??tre %s de %s()\n"
							":"VAR_PARAM_INIT":%s:%lu\n"
							"\tconst ax,"VAR_LOCAL_VAL":%s:%s\n"
							"\tjmp ax\n\n"
							":"VAR_LOCAL":%s:%s\n"
							"@int 0\n"
							":"VAR_LOCAL_VAL":%s:%s\n"
							"\tpop ax\n"
							"\tconst bx,"VAR_LOCAL":%s:%s\n"
							"\tstorew ax,bx\n"
							"\tconst cx,"VAR_PARAM_INIT_FIN":%s:%lu\n"
							"\tjmp cx\n\n",
						$2, funDef->name,
						funDef->name, funDef->nParams,
						funDef->name, $2,
						funDef->name, $2,
						funDef->name, $2,
						funDef->name, $2,
						funDef->name, funDef->nParams
						);
					}
// Dans une liste d'arguments
| largs ',' type ID	{
					// V??rification de l'unicit?? de l'identifiant de l'argument
						symbol_table_entry* funArg = search_symbol_table($4);
						if (funArg != NULL){
							fail_with("Erreur: %s est d??j?? d??fini dans %s()\n\n",
							$4, funDef->name);
						}

					/* Ajout de l'identifiant de l'argument dans la
					table des symboles */
						funArg =  new_symbol_table_entry($4);
						funArg->class = LOCAL_VARIABLE;
						funArg->desc[0] = $3;

					/* Mise ?? jour des informations de d??finition de
					la fontion dans la table des symboles */
						funDef->nParams++;
						funDef->desc[funDef->nParams] = $3;

						
						printf(
							"; Code de d??finition du param??tre %s de %s()\n"
							":"VAR_PARAM_INIT":%s:%lu\n"
							"\tconst ax,"VAR_LOCAL_VAL":%s:%s\n"
							"\tjmp ax\n\n"
							":"VAR_LOCAL":%s:%s\n"
							"@int 0\n"
							":"VAR_LOCAL_VAL":%s:%s\n"
							"\tpop ax\n"
							"\tconst bx,"VAR_LOCAL":%s:%s\n"
							"\tstorew ax,bx\n"
							"\tconst dx,"VAR_PARAM_INIT_FIN":%s:%lu\n"
							"\tjmp dx\n\n",
						$4, funDef->name,
						funDef->name, funDef->nParams,
						funDef->name, $4,
						funDef->name, $4,
						funDef->name, $4,
						funDef->name, $4,
						funDef->name, funDef->nParams
						);
					};


blocinstr :
 '{' sdeclV sinstrV '}'	{
	 					// Lib??rer les d??finitions de varibles locales
						// de la table des symbolse
							for (int i = 0; i < $2; i++) {
								free_first_symbol_table_entry();
							}
							$$ = $2 + $3;
						}
;

sdeclV : 
  %empty		{ $$ = 0; }
| sdecl			{ $$ = $1; }
;

sdecl :
 decl			{ $$ = 1; }
| sdecl decl	{ $$ = $1 + 1; }
;

sinstrV :
  %empty		{ $$ = 0; }
| sinstr		{ $$ = $1; }
;

sinstr :
  instr			{ $$ = 1; }
| sinstr  instr	{ $$ = $1 +1; }
;




lexpr :
  expr			{ $$ = 1;  }
| lexpr ','  expr	{ $$ = $1 + 1;}
;

lexprV :
  %empty 		{ $$ = 0; }
| lexpr			{ $$ = $1; }
;


instr:
  blocinstr			{ $$ = $1; }

| RETURN ';'		{
					// Si espace global erreur
					// Sinon si analyse de fonction en cours et
					// type de retour de f() != VOID erreur
						if (funDef == NULL) {
							fail_with(
								"Erreur: espace global, retour de valeur impossible !\n\n");
								$$ = ERR;
						} else {
							if (funDef->desc[0] != VOID_T) {
								fail_with(
									"Erreur: type de retour incompatible:\n"
									"\t%s %s() retourne void!\n\n",
								(funDef->desc[0] == INT_T ? "int" : "bool" ), funDef->name);
								$$ = ERR;
							} else {
								$$ = VOID_T;
							}
						}
					}

| RETURN VOID_LEX ';'		{
// Si espace global erreur
// Sinon si analyse de fonction en cours et
// type de retour de f() != VOID erreur
	if (funDef == NULL) {
		fail_with(
			"Erreur: espace global, retour de valeur impossible !\n\n");
			$$ = ERR;
	} else {
		if (funDef->desc[0] != VOID_T) {
			fail_with(
				"Erreur: type de retour incompatible:\n"
				"\t%s %s() retourne void!\n\n",
			(funDef->desc[0] == INT_T ? "int" : "bool" ), funDef->name);
			$$ = ERR;
		} else {
			$$ = VOID_T;
		}
	}
}

| RETURN expr ';'	{
					// Si espace global erreur
					// Sinon si analyse de fonction en cours et
					// type de retour de f() != type de expr erreur
						if (funDef == NULL) {
							fail_with(
								"Erreur: espace global, retour de valeur impossible !\n\n");
								$$ = ERR;
						} else {
							if (   (funDef->desc[0] == INT_T && $2 != T_INT)
								|| (funDef->desc[0] == BOOL_T && $2 != T_BOOL)
								|| (funDef->desc[0] == VOID_T)) {
									$$ = ERR;
									fail_with(
										"Erreur: type de retour incompatible:\n"
										"\t%s %s() retourne %s!\n\n",
									(funDef->desc[0] == INT_T ? "int" : (funDef->desc[0] == BOOL_T ? "bool" : "void") ),
									funDef->name,
									($2 == T_INT ? "int" : "bool"));
							} else {
								$$ = $2;
							}
						}

					}

| expr ';'				{
							if ($1 != ERR){
								printf(
									"; R??sultat de expr non ??valu??"
									"\tpop\n"
								);
							}
						}
| ID '=' expr ';'		{
					// V??rifier si ID a ??t?? d??clar??et est une variable, sinon erreur
					// G??n??rer le cde d'affectation d'une variable
							symbol_table_entry* var = search_symbol_table($1);

							if (var == NULL) {
								fail_with("Erreur: variable %s non d??clar?? !\n\n", $1);
								$$ = ERR;
							} else if ( var->class == FUNCTION) {
								fail_with("Erreur: %s() est une fonction !\n\n", $1);
								$$ = ERR;
							}

							if ( (var->desc[0] == INT_T && $3 != T_INT)
								|| (var->desc[0] == BOOL_T && $3 != T_BOOL)) {
						// V??rification de la compatibilit?? des types
								fail_with(
									"Erreur: type incompatible\n"
									"\t%s est de type %s, affectation de %s\n\n", 
									$1, ((var->desc[0] == INT_T) ? "int" : "bool"),
									(($3 == T_INT) ? "int" : "bool"));

									$$ = ERR;
							}

							if (funDef == NULL) {
						// Espace global, la variable est donc globale
								printf(
									"; Code affectation variable globale %s\n"
									"\tpop ax\n"
									"\tconst bx,"VAR_GLOBAL":%s\n"
									"\tstorew ax,bx\n",
								$1, $1);
							} else {
						// Analyse d'une fonction en cours, la variable est locale
								printf(
									"; Code affectation variable locale %s de %s\n"
									"\tpop ax\n"
									"\tconst bx,"VAR_LOCAL":%s:%s\n"
									"\tstorew ax,bx\n",
								$1, funDef->name,
								funDef->name, $1);
							}

							$$ = $3;
						}

| IF '(' expr fixif ')' instr ELSE 	{
				// Else est vrai
					printf(
						"; Si [else (expr)] == vrai \n"
						"\tconst ax,"IF_FIN":%d\n"
						"\tjmp ax\n"
						"; Saut ?? "IF_FIN"\n\n"
						"; Si [else (expr)] == faux\n"
						":"IF_TEST_NEG":%d\n",
					$<entier>4,
					$<entier>4);

							} instr {
										if ( $3 != T_BOOL ) {
											fail_with(
												"Erreur: test de condition non bool??eene dans\n"
												"\t if (expr)\n\n"
											);
										}
									// Fin ELSE
										printf(
											"; Fin else %d\n"
											":"IF_FIN":%d\n"
										, $<entier>4, $<entier>4);
									}
| IF '(' expr fixif ')' instr 		{
										if ( $3 != T_BOOL ) { 
											fail_with(
												"Erreur: test de condition non bool??eene dans\n"
												"\t if (expr)\n\n"
											);
										}
									// ELSE_FAUX
										printf(
											"; Si [else (expr)] == faux\n"
											":"IF_TEST_NEG":%d\n",
										$<entier>4);
									} %prec NON_ELSE
| WHILE '('							{
										unsigned int labelNumber = new_label_number();
										$<entier>$ = labelNumber;
										printf(":"DEBUT_WHILE":%u\n",labelNumber);
									} expr {
										printf(
											"; Code cible WHILE_FAUX:%d\n" 
											"\tpop ax\n"
											"\tconst bx,0\n"
											"\tconst cx,"WHILE_FIN":%d\n"
										// Test (expr == faux)
											"\tcmp ax,bx\n"
											"\tjmpc cx\n"
											"; Si (expr == faux) saut ?? "WHILE_FIN"\n",
										$<entier>3, $<entier>3);
									} ')' instr {
										
									// WHILE_VRAI
									// V??rifier si expr est bool??en
										if ( $4 != T_BOOL ) { 
											fail_with(
												"Erreur: test de condition non bool??eene dans\n"
												"\t while (expr) { ... }\n\n"
											);
										}
										printf("; Fin tour de boucle\n"
										"\tconst cx,"DEBUT_WHILE":%u\n"
										"\tjmp cx\n\n"
									// WHILE_FIN
										":"WHILE_FIN":%u\n", $<entier>3, $<entier>3);
									}
| PRINT expr ';'		{
					if ($2 == T_INT) {
 						printf("; Pour afficher la valeur calcul??e, qui se trouve normalement en sommet de pile\n"
						"\tcp ax,sp\n"
						"\tcallprintfd ax\n"
						"\tpop ax\n");
 					} else if ($2 == T_BOOL) {
						
						unsigned int labelNumber = new_label_number();
						create_label(buffer1, MAXBUF, "%s:%u", PRINT_TRUE, labelNumber);
						create_label(buffer2, MAXBUF, "%s:%u", PRINT_FIN, labelNumber);

 						printf(
							"; Affichage booleen (%d)\n"
							"\tpop ax\n"
							"\tconst bx,1\n"
							"\tconst cx,%s\n"
						// Test (expr1 == true)
							"; Comparaison de expr1 ?? true\n"
							"\tcmp ax,bx\n"
							"\tjmpc cx\n"
							"; Si expr1 == true saut ?? "PRINT_TRUE"\n"
						// PRINT_FALSE
							"; Code cible "PRINT_FALSE"\n"
							"\tconst cx,"BOOL_STR_FALSE"\n"
							"\tcallprintfs cx\n"
							"\tconst cx,%s\n"
							"\tjmp cx\n\n"
							"; Saut ?? "PRINT_FIN"\n\n"
						// PRINT_TRUE
							"; Code cible "PRINT_TRUE"\n"
							":%s\n"
							"\tconst cx,"BOOL_STR_TRUE"\n"
							"\tcallprintfs cx\n\n"
						// PRINT_FIN
							":%s\n",
						labelNumber,
						buffer1,
						buffer2,
						buffer1,
						buffer2);
 					}
				}


decl:
 type ID '=' expr ';'	{
	 					// V??rifier la comatibilit?? des types
						// Ajouter l'ID dans la table des symboles en fontion
						//  de la port??e de la varible
						// 		* Si analyes de definition de fonction variable locale
						//		* Sinon variable globale
							if (($4 == T_INT && $1 == INT_T) || ($4 == T_BOOL && $1 == BOOL_T) ) {
								
								symbol_table_entry* var = search_symbol_table($2);
								if (var != NULL){
									fail_with(
										"Erreur: %s est d??j?? d??clar??\n\n",
									$2);
								}
								
								var = new_symbol_table_entry($2);
								var->desc[0] = $1;

								if (funDef != NULL) {
							// Analyse d'une fonction la variable est locale
							// Mise ?? jour de la d??finition de la fonction
									var->class = LOCAL_VARIABLE;
									funDef->nLocalVariables++;
									printf(
										"; Code nouvelle variable locale (%s, %s)\n"
										"\tconst ax,"VAR_LOCAL_VAL":%s:%s\n"
										"\tjmp ax\n\n"
										"; Saut ?? "VAR_LOCAL_VAL"\n\n"
										":"VAR_LOCAL":%s:%s\n"
										"@int 0\n\n"
										":"VAR_LOCAL_VAL":%s:%s\n"
										"\tpop ax\n"
										"\tconst bx,"VAR_LOCAL":%s:%s\n"
										"\tstorew ax,bx\n",
									funDef->name, $2,
									funDef->name, $2,
									funDef->name, $2,
									funDef->name, $2,
									funDef->name, $2);
								} else {
							// Aucune analyse de fonction en cours, la variable est globale
									var->class = GLOBAL_VARIABLE;

									printf(
										"; Code nouvelle variable globale %s\n"
										"\tconst ax,"VAR_GLOBAL_VAL":%s\n"
										"\tjmp ax\n\n"
										"; Saut ?? "VAR_GLOBAL_VAL"\n\n"
										":"VAR_GLOBAL":%s\n"
										"@int 0\n\n"
										":"VAR_GLOBAL_VAL":%s\n"
										"\tpop ax\n"
										"\tconst bx,"VAR_GLOBAL":%s\n"
										"\tstorew ax,bx\n",
									$2, $2, $2, $2, $2);
								}

								$$ = $4;

							} else {
								$$ = ERR;

								if ($1 == VOID_T) {
									fail_with(
									"Erreur syntaxique: d??claration de variable incorrecte\n"
									"\tvoid  %s;\n\n", $2);
								} else {
									fail_with(
										"Erreur: type incompatible\n"
										"\t%s est de type %s, affectation de %s\n\n", 
										$1, (($1 == INT_T) ? "int" : "bool"),
										(($4 == T_INT) ? "int" : "bool"));
								}
							}
						}
| type ID ';'	{
						// V??rifier la syntaxe de la d??claration
						// Ajouter l'ID dans la table des symboles en fontion
						//  de la port??e de la varible
						// 		* Si analye de definition de fonction variable locale
						//		* Sinon variable globale
								if ($1 == VOID_T) {
									fail_with(
									"Erreur syntaxique: d??claration de variable incorrecte\n"
									"\tvoid  %s;\n\n", $2);
								}
								symbol_table_entry* var = search_symbol_table($2);
								if (var != NULL){
									fail_with(
										"Erreur: %s est d??j?? d??clar??\n\n",
									$2);
								}

								var = new_symbol_table_entry($2);
								var->desc[0] = $1;
								
								if (funDef != NULL) {
							// Analyse d'une fonction la variable est locale
							// Mise ?? jour de la d??finition de la fonction
									var->class = LOCAL_VARIABLE;
									funDef->nLocalVariables++;
									printf(
										"; Code nouvelle variable locale (%s, %s)\n"
										":"VAR_LOCAL":%s:%s\n"
										"@int 0\n",
									funDef->name, $2,
									funDef->name, $2);

								} else {
							// Aucune analyse de fonction en cours, la variable est globale
									var->class = GLOBAL_VARIABLE;

									printf(
										"; Code nouvelle variable globale %s\n"
										":"VAR_GLOBAL":%s\n"
										"@int 0\n",
									$2, $2);
								}

								$$ = ($1 == INT_T) ? T_INT : T_BOOL;
						}
;


expr	 :
  ID '(' lexprV ')'		{
						// V??rifation de l'existance de la d??finition de la fonction
							symbol_table_entry* fun = search_symbol_table($1);

							if (fun == NULL) {
								fail_with(
									"Erreur: %s n'est pas d??j?? d??clar??\n\n",
								$1);
								$$ = ERR;
							}


						// Traitement de l'appel de la function 
						// V??rification de l'appel avec nombre de param??tres correct
							if ($3 != fun->nParams ) {
								fail_with(
									"Syntaxe incorrecte:\n"
									"\t%s() a %d arguments\n",
								$1, $3);
							}


							//- Ex??cution de la fonction */
							printf(
								"; Saut ?? la d??fintion de %s() pour ex??cution\n"
								"\tconst dx,"FUN_DEF":%s\n"
								"\tjmp dx\n\n"
								":"FUN_DEF_FIN"%s",
							fun->name,
							fun->name,
							fun->name);

							$$ = (fun->desc[0] == INT_T)
								? T_INT
								: T_BOOL;
						}
| expr '+' expr		{
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer l'addition
						if ($1 == T_INT && $3 == T_INT ){
							printf(
								"; Debut addition\n"
								"\tpop ax\n"
								"\tpop bx\n"
								"\tadd bx,ax\n"
								"\tpush bx\n");

							$$ = T_INT;
						} else {
							fail_with("Erreur: erreur arithm??tique !\n\n");
							$$ = ERR;
						}
					}
| expr '-' expr			{
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer la soustraction
							if ($1 == T_INT && $3 == T_INT){
								printf(
									"; Debut soustraction\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tsub bx,ax\n"
									"\tpush bx\n");
								$$ = T_INT;
							} else {
								fail_with("Erreur: erreur arithm??tique !\n\n");
								$$ = ERR;
							}
						}
| expr '*' expr			{
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer la multiplication
							if ($1 == T_INT && $3 == T_INT){
								printf(
									"; Debut multiplication\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tmul bx,ax\n"
									"\tpush bx\n");
								$$ = T_INT;
							} else {
								fail_with("Erreur: erreur arithm??tique !\n\n");
								$$ = ERR;
							}
						}
| expr '/' expr			{
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer la division
							if ($1 == T_INT && $3 == T_INT){
								printf(
									"; Debut division"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tconst cx,"ERR_DIV_ZERO"\n"
									"\tdiv bx,ax\n"
									"\tjmpe cx\n"
									"\tpush bx\n");
								$$ = T_INT;
							} else {
								fail_with("Erreur: erreur arithm??tique !\n\n");
								$$ = ERR;
							}
						}
| expr '%' expr			{
						// V??rifier que expr1 et expr2 sont de type int sinon erreur de typage
						// puis ??valuer la modulo
							if ($1 == T_INT && $3 == T_INT){
								printf(
									"; Debut modulo\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tcp cx,bx\n"
									"\tconst dx,"ERR_DIV_ZERO"\n"
									"\tdiv bx,ax\n"
									"\tjmpe dx\n"
									"\tmul bx,ax\n"
									"\tsub cx,bx\n"
									"\tpush cx\n");
								$$ = T_INT;
							} else {
								fail_with("Erreur: erreur arithm??tique !\n\n");
								$$ = ERR;
							}
						}
| NUMBER				{
							printf(
								"; Ajout du nombre %d\n"
								"\tconst ax,%d\n"
								"\tpush ax\n",
							$1,
							$1);

							$$ = T_INT;
						}

| '(' expr ')'			{ $$ = $2; }

| expr EQ expr			{
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le EQ
							if ($1 == $3 && $1 != ERR) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", EQ_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", EQ_FIN, labelNumber);

								printf(
									"; Debut EQ (%d)\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tconst cx,%s\n"
								// Test (expr1 == expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Si expr1 == expr2 saut ?? "EQ_VRAI"\n"
									"; Si expr1 != expr2 code cible "EQ_FAUX"\n"
								//EQ_FAUX
									"; Code cible "EQ_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut ?? "EQ_FIN"\n"
								//EQ_VRAI
									"; Code cible "EQ_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
								// EQ_FIN
									"; Code cible "EQ_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								$$ = T_BOOL;
							} else {
								$$ = ERR;
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
								printf("; Fin EQ\n");
						}

| expr DIF expr			{
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le DIF
							if ($1 == $3 && $1 != ERR) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", DIF_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", DIF_FIN, labelNumber);

								printf(
									"; Debut DIF (%d)\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tconst cx,%s\n"
								// Test (expr1 == expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Si expr1 == expr2 saut ?? "DIF_FAUX"\n"
									"; Si expr1 != expr2 code cible "DIF_VRAI"\n"
								// DIF_VRAI
									"; Code cible "DIF_VRAI"\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut ?? "DIF_FIN"\n"
								// DIF_FAUX
									"; Code cible "DIF_FAUX"\n"
									":%s\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
								// DIF_FIN
									"; Code cible "DIF_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								$$ = T_BOOL;
							} else {
								$$ = ERR;
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
								printf("; Fin DIF\n");
						}

| expr INF expr			{
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le INF
							if ($1 == T_INT && $3 == T_INT) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", INF_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", INF_FIN, labelNumber);

								printf(
									"; Debut INF (%d)\n"
									"\tpop bx\n"
									"\tpop ax\n"
									"\tconst cx,%s\n"
									// Test (expr1 < expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tsless ax,bx\n"
									"\tjmpc cx\n"
									"; Si (expr1 < expr2) saut ?? "INF_VRAI"\n"
									"; Si (expr1 !(<) expr2) code cible "INF_FAUX"\n"
									//INF_FAUX
									"; Code cible "INF_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut ?? "INF_FIN"\n"
									//INF_VRAI
									"; Code cible "INF_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
									// INF_FIN
									"; Code cible "INF_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								$$ = T_BOOL;
							} else {
								$$ = ERR;
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
							printf("; Fin INF\n");
						}
| expr SUP expr        	{
							if ($1 == T_INT && $3 == T_INT) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", SUP_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", SUP_FIN, labelNumber);

								printf(
									"; Debut SUP %d\n"
									"\tpop bx\n"
									"\tpop ax\n"
									"\tconst cx,%s\n"
									// Test (expr2 < expr1)
									"; Comparaison de expr1 et expr2\n"
									"\tsless bx,ax\n"
									"\tjmpc cx\n"
									"; Si expr2 < expr1 saut ?? "SUP_VRAI"\n"
									"; Si expr2 !(<) expr1 code cible "SUP_FAUX"\n"
									//EQ_FAUX
									"; Code cible "SUP_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									";Saut ?? "SUP_FIN"\n"
									//EQ_VRAI
									"; Code cible "SUP_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
									// EQ_FIN
									"; Code cible "SUP_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								$$ = T_BOOL;
							} else {
								$$ = ERR;
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
							printf("; Fin SUP\n");
						}
| expr INF_EQ expr		{
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le INF_EQ
							if ($1 == T_INT && $3 == T_INT) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", INF_EQ_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", INF_EQ_FIN, labelNumber);
								
								printf(
									"; Debut INF_EQ %d\n"
									"\tpop bx\n"
									"\tpop ax\n"
									"\tconst cx,%s\n"
									// Test (expr1 == expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Si (expr1 == expr2) saut ?? "INF_EQ_VRAI"\n"
									// Test (expr1 < expr2)
									"\tsless ax,bx\n"
									"\tjmpc cx\n"
									"; Si (expr1 < expr2) saut ?? "INF_EQ_VRAI"\n"
									"; Si (expr1 !(<=) expr2) code cible "INF_EQ_FAUX"\n"
									//INF_EQ_FAUX
									"; Code cible "INF_EQ_FAUX"\n"
									"\tconst dx,0\n"
									"\tpush dx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									"; Saut ?? "INF_EQ_FIN"\n"
									//INF_EQ_VRAI
									"; Code cible "INF_EQ_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
									"\tpush dx\n"
									// INF_EQ_FIN
									"; Code cible "INF_EQ_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								$$ = T_BOOL;
							} else {
								$$ = ERR;
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
							printf("; Fin INF_EQ\n");
                      	}
| expr SUP_EQ expr		{
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le SUP_EQ
							if ($1 == T_INT && $3 == T_INT) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", SUP_EQ_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", SUP_EQ_FIN, labelNumber);
								printf(
									"; Debut SUP_EQ (%d)\n"
									"\tpop bx\n"
									"\tpop ax\n"
									"\tconst cx,%s\n"
								// Test (expr1 == expr2)
									"; Comparaison de expr1 et expr2\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Si (expr1 == expr2) saut ?? "SUP_EQ_VRAI"\n"
								// Test (expr1 < expr2)
									"\tsless bx,ax\n"
									"\tjmpc cx\n"
									"; Si (expr2 < expr1) saut ?? "SUP_EQ_VRAI"\n"
									"; Si (expr2 !(<=) expr1) code cible "SUP_EQ_FAUX"\n"
								// SUP_EQ_FAUX
									"; Code cible "SUP_EQ_FAUX"\n"
									"\tconst dx,0\n"
									"; Saut ?? "SUP_EQ_FIN"\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
								// SUP_EQ_VRAI
									"; Code cible "SUP_EQ_VRAI"\n"
									":%s\n"
									"\tconst dx,1\n"
								// SUP_EQ_FIN
									"; Code cible "SUP_EQ_FIN"\n"
									":%s\n"
									"\tpush dx\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								$$ = T_BOOL;
							} else {
								$$ = ERR;
								fail_with("Erreur: erreur s??mentique !\n\n");
							}
							printf(";Fin INF_EQ\n");
                      	}
| expr AND expr			{
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// puis ??valuer le ET (epxr1 * expr2 car true = 1)
							if ($1 == T_BOOL && $3 == T_BOOL){
								printf(
									"; Code cible AND\n"
									"\tpop ax\n"
									"\tpop bx\n"
									"\tmul bx,ax\n"
									"\tpush bx\n");
								$$ = T_BOOL;
							} else {
								$$ = ERR;
								fail_with("Erreur: erreur arithm??tique !\n\n");
							}
							printf("; Fin AND\n");
						}
| expr OR expr			{
						// V??rifier que expr1 et expr2 sont de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer le OU
							if ($1 == T_BOOL && $3 == T_BOOL) {
									unsigned int labelNumber = new_label_number();
									create_label(buffer1, MAXBUF, "%s:%u", OR_VRAI, labelNumber);
									create_label(buffer2, MAXBUF, "%s:%u", OR_FIN, labelNumber);
									
									printf(
										"; Debut OU (%d)\n"
										"\tconst cx,%s\n"
										"\tpop bx\n"
										"\tpop ax\n"
									// Test (expr1 == true)
										"; Comparaison ?? true de expr1\n"
										"\tconst dx,1\n"
										"\tcmp ax,dx\n"
										"\tjmpc cx\n"
										"; Saut ?? "OR_VRAI" si expr1 == vrai\n"
									// Test (expr2 == true)
										"; Comparaison ?? true de expr2\n"
										"\tcmp bx,dx\n"
										"\tjmpc cx\n"
										"; Saut ?? "OR_VRAI" si expr2 est vrai\n"
										"; L'esxpressin est ??valu??e ?? false\n"
									// OR_FAUX
										"; Code cible "OR_FAUX"\n"
										"\tconst bx,0\n"
										"\tpush bx\n"
										"\tconst dx,%s\n"
										"\tjmp dx\n\n"
									// OR_VRAI
										"; Code cible "OR_VRAI"\n"
										":%s\n"
										"\tconst bx,1\n"
										"\tpush bx\n"
									// OR_FIN
										"; Code cible "OR_FIN"\n"
										":%s\n",
									labelNumber,
									buffer1,
									buffer2,
									buffer1,
									buffer2);
									$$ = T_BOOL;
							} else {
								$$ = ERR;
							}
							printf("; Fin OR\n");
						}
	| NEG expr			{
						// V??rifier que expr est de type bool sinon erreur de typage
						// Cr??er un nouveau label pour anticiper la r??cursivit??
						// puis ??valuer la n??gation
							if ($2 == T_BOOL) {
								unsigned int labelNumber = new_label_number();
								create_label(buffer1, MAXBUF, "%s:%u", NEG_VRAI, labelNumber);
								create_label(buffer2, MAXBUF, "%s:%u", NEG_FIN, labelNumber);
								printf(
									"; Debut NEG (%d)\n"
									"\tconst cx,%s\n"
									"\tpop ax\n"
								// Test (expr == false)
									"; Comparaison ?? false\n"
									"\tconst bx,0\n"
									"\tcmp ax,bx\n"
									"\tjmpc cx\n"
									"; Saut  ?? "NEG_VRAI" en cas d'??galit??\n"
								// NEG_FAUX
									"; La comparison est ??valu??e ?? true\n"
									"; Code cible "NEG_FAUX"\n"
									"\tpush bx\n"
									"\tconst cx,%s\n"
									"\tjmp cx\n\n"
									"; Saut  ?? "NEG_FIN"\n"
								// NEG VRAI
									"; Code cible "NEG_VRAI"\n"
									":%s\n"
									"\tconst bx,1\n"
									"\tpush bx\n"
								// NEG_FIN
									"; Code cible "NEG_FIN"\n"
									":%s\n",
								labelNumber,
								buffer1,
								buffer2,
								buffer1,
								buffer2);

								$$ = T_BOOL;

							}else{
								$$ = ERR;
								fail_with("Erreur: erreur arithm??tique !\n\n");
							}
							printf("; Fin NEG\n");
						}
	| TRUE				{
						// Ajouter true en pile
							printf(
								"; Ajout de TRUE\n"
								"\tconst ax,%u\n"
								"\tpush ax\n",
							1);
							$$ = T_BOOL;
						}
	| FALSE				{
						// Ajouter false en pile
							printf(
								"; Ajout de FALSE\n"
								"\tconst ax,%u\n"
								"\tpush ax\n",
							0);
							$$ = T_BOOL;
						}
	| ID				{
						// V??rifation de l'existance de la d??claration de la variable
							symbol_table_entry* var = search_symbol_table($1);

							if (var == NULL){
								//fail_with("%s n'a pas ??t?? d??clar??\n", $1);
								$$ = ERR;
							} else if (funDef == NULL && var->class == GLOBAL_VARIABLE) {
						// Acc??s ?? une varibale globale
								printf(
									"; Debut ??valuation ID (variable globale)\n"
									"; Recuperation valeur de %s et mise en pile\n"
									"\tconst bx,"VAR_GLOBAL":%s\n"
									"\tloadw ax,bx\n"
									"\tpush ax\n",
								var->name,
								var->name);

								$$ = (var->desc[0] == INT_T)
									? T_INT
									: T_BOOL;

							} else if (funDef != NULL && var->class == LOCAL_VARIABLE) {
						// Acc??s ?? une varibale locale ou un param??tre
								printf(
									"; Debut ??valuation ID (variable locale)\n"
									"; Recuperation valeur de %s:%s et mise en pile\n"
									"\tconst bx,"VAR_LOCAL":%s:%s\n"
									"\tloadw ax,bx\n"
									"\tpush ax\n",
								funDef->name, $1,
								funDef->name, $1);
								$$ = (var->desc[0] == INT_T)
									? T_INT
									: T_BOOL;
							} else {
						// ID n'est pas une varibale ou un param??tre
							fail_with("Erreur: id n'est pas une variable ou un param??tre !\n\n");
								$$ = ERR;
							}
						}
;
%%

void yyerror(char const *s) {
  fprintf(stderr, "%s\n", s);
}

static unsigned int new_label_number() {
	static unsigned int current_label_number = 0u;
	if ( current_label_number == UINT_MAX ) {
		fail_with("Error: maximum label number reached!\n");
	}
	return current_label_number++;
}
/*
* char buffer1[MAXBUF], char buffer2[MAXBUF];
* unsigned ln = new_label_number();
* create_label(buffer1, MAXBUF, "%s:%u:%s", "loop", ln, "begin"); // "loop:10:begin"
* create_label(buffer2, MAXBUF, "%s:%u:%s", "loop", ln, "end");  //  "loop:10:end"
*/

static void create_label(char *buf, size_t buf_size, const char *format, ...) {
	va_list ap;
	va_start(ap, format);
	if ( vsnprintf(buf, buf_size, format, ap) >= buf_size ) {
		va_end(ap);
		fail_with("Error in label generation: size of label exceeds maximum size!\n");
	}
	va_end(ap);
}

void fail_with(const char *format, ...) {
	va_list ap;
	va_start(ap, format);
	vfprintf(stderr, format, ap);
	va_end(ap);
	exit(EXIT_FAILURE);
}

int main (int argc, char** argv){
	printf(
		"; Calculette\n"
		"\tconst ax,"PROGRAM_START"\n"
		"\tjmp ax\n\n"
		":"PROGRAM_START"\n"
		"; Pr??paration de la pile\n"
		"\tconst bp,pile\n"
		"\tconst sp,pile\n"
		"\tconst ax,2\n"
		"\tsub sp,ax\n");

	yyparse();

	printf(
		"\tend\n"
		"; La zone de pile\n"
		":pile\n"
		"@int 0\n\n"
		"; D??finition Chaine de charact??re boolean faux\n"
		":"BOOL_STR_FALSE"\n"
		"@string \"false\"\n\n"
		"; D??finition Chaine de charact??re boolean true\n"
		":"BOOL_STR_TRUE"\n"
		"@string \"true\"\n\n"
		"; D??finition chaine de charact??re erreur de division par z??ro\n"
		":"ERR_DIV_ZERO_MSG"\n"
		"@string \"Erreur: division par 0\"\n\n"
		"; Code cible erreur de division par z??ro\n"
		":"ERR_DIV_ZERO"\n"
		"\tconst ax,"ERR_DIV_ZERO_MSG"\n"
		"\tcallprintfs ax\n"
		"\tend\n"
	);
	return 0;
}
