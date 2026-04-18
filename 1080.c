/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1071
Data        : 18/04/2026
Objetivo    : Leia 100 valores inteiros. Apresente então o maior valor lido e a posição dentre os 100 valores lidos.
Aprendizado : funções "for" "if/else" "printf"
-------------------------------------------------------------------------- */

#include<stdio.h>

int main(void){
	int numeroAtual , maior , posicao;
	maior = 0;
	for(int contador = 1; contador <= 100; contador++){
		scanf("%d" , &numeroAtual);
		
		if(numeroAtual > maior){
			maior = numeroAtual;
			posicao = contador;
		}
		
	}
	
	printf("%d\n" , maior);
	printf("%d\n" , posicao);
	
		
	return 0;
}
