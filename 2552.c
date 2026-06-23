/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/2552
Data        : 22/06/2026
Objetivo    : PaodeQuejoSweeper
Aprendizado : matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int n, m;
    int mat[110][110];

    while(scanf("%d %d", &n, &m) != EOF)
    {
        int i, j;

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }

        for(i = 0; i < n; i++)
        {
            for(j = 0; j < m; j++)
            {
                if(mat[i][j] == 1)
                {
                    printf("9");
                }
                else
                {
                    int soma = 0;

                    if(i > 0 && mat[i - 1][j] == 1)
                        soma++;

                    if(i < n - 1 && mat[i + 1][j] == 1)
                        soma++;

                    if(j > 0 && mat[i][j - 1] == 1)
                        soma++;

                    if(j < m - 1 && mat[i][j + 1] == 1)
                        soma++;

                    printf("%d", soma);
                }
            }

            printf("\n");
        }
    }

    return 0;
}
