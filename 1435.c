/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1435
Data        : 22/06/2026
Objetivo    : Matriz quadrada I
Aprendizado : matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n) == 1 && n != 0)
    {
        int i, j;

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                int cima = i;
                int esquerda = j;
                int baixo = n - 1 - i;
                int direita = n - 1 - j;

                int menor = cima;

                if(esquerda < menor)
                    menor = esquerda;

                if(baixo < menor)
                    menor = baixo;

                if(direita < menor)
                    menor = direita;

                if(j == 0)
                    printf("%3d", menor + 1);
                else
                    printf(" %3d", menor + 1);
            }

            printf("\n");
        }

        printf("\n");
    }

    return 0;
}
