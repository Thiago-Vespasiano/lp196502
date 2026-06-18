/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1180
Data        : 18/06/2026
Objetivo    : Menor e Posição
Aprendizado : vetores
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */
#include <stdio.h>
int main (){
    int v;
    scanf ("%d", &v);
    int n[v];
    for (int i = 0; i < v; i++){
        scanf ("%d", &n[i]);
    }
    int minor = n[0];
    int minorposition = 0;
    for (int i = 0; i < v; i++){
        if (n[i] < minor){
        minor = n[i];
        minorposition = i ;
        }
    }
    printf ("Menor valor: %d\n", minor);
    printf ("Posicao: %d\n", minorposition);
    return 0;
}
