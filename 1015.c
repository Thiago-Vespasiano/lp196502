/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1015
Data        : 16/06/2026
Objetivo    : Distância Entre Dois Pontos
Aprendizado : math.h
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- *
#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2;
    double distancia;

    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    distancia = sqrt(
        (x2 - x1) * (x2 - x1) +
        (y2 - y1) * (y2 - y1)
    );

    printf("%.4lf\n", distancia);

    return 0;
}
