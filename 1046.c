/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1046
Data        : 22/06/2026
Objetivo    : Matriz 123
Aprendizado : matrizes
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- *
#include <stdio.h>

int calcularDuracao(int inicio, int fim)
{
    if(fim > inicio)
        return fim - inicio;
    else
        return (24 - inicio) + fim;
}

int main()
{
    int inicio, fim;

    scanf("%d %d", &inicio, &fim);

    int duracao = calcularDuracao(inicio, fim);

    printf("O JOGO DUROU %d HORA(S)\n", duracao);

    return 0;
}
