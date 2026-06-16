/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1017
Data        : 16/06/2026
Objetivo    : gasto de combustivel
Aprendizado : float
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- *
#include <stdio.h>

int main(){
    int tempo, velocidade, distancia;
    float litros;

    scanf("%d\n%d", &tempo, &velocidade);

    distancia = velocidade * tempo;
    litros = distancia/12.0;

    printf("%.3lf\n", litros);

    return 0;
}
