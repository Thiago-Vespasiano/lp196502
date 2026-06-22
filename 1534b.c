/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 22/06/2026
Objetivo    : Matriz 123
Aprendizado : matrizes
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- *
#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i + j == n - 1) {
                    printf("2");
                }
                else if (i == j) {
                    printf("1");
                } 
                else {
                    printf("3");
                }
            }
            printf("\n"); 
        }
    }

    return 0;
}
