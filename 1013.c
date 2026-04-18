/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1013
Data        :17/04/2026
Objetivo    : Faça um programa que leia três valores e apresente o maior dos três valores lidos seguido da mensagem “eh o maior”. 
Aprendizado : Usar funções matemáticas e função "scanf"
-------------------------------------------------------------------------- */

#include <stdio.h>
#include <stdlib.h>

int main (void){
	int A, B, C, MAIOR; 
	scanf ("%d", &A);
	scanf ("%d", &B);
	scanf ("%d", &C);
	
	MAIOR = (A+B+abs(A-B))/2;
	MAIOR = (MAIOR+C+abs(MAIOR-C))/2;
	printf ("%d eh o maior", MAIOR);
	
	return 0;
