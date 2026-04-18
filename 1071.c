/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 18/04/2026
Objetivo    : Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.
Aprendizado : funções "for" e "if/else"
-------------------------------------------------------------------------- */

#include <stdio.h>

int main (void){
	int a, b, menor, maior, soma;
	scanf ("%d", &a);
	scanf ("%d", &b);
	soma = 0;
	
	if (a<b){
		menor = a;
		maior = b;
	}else{ 
		menor = b;
		maior = a;
	}
	for (int contador = menor+1; contador < maior; contador++){
		if (contador %2 != 0){
			soma = soma + contador;
		}
	}
	printf ("%d\n", soma);
	return 0;
	}
