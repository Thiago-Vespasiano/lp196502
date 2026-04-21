/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1080
Data        : 21/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos
Aprendizado : vetores
-------------------------------------------------------------------------- */
#include <stdio.h>

int main (){
	int x[100];
	for (int i = 0; i < 100; i++){
		scanf ("%d", &x[i]);
	}
	int maior = x[0];
	int pos = 0 ;
	for (int b = 1; b < 100; b++){
		if (x[b] > maior){maior = x[b]; pos = b;}
	}
	printf ("%d\n%d\n", maior, pos+1);
	
	return 0;
  }
