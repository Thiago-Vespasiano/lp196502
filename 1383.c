/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1383
Data        : 22/06/2026
Objetivo    : sodoku
Aprendizado : matrizes
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int n;
    int caso, i, j, l, c;

    scanf("%d", &n);

    for(caso = 1; caso <= n; caso++)
    {
        int mat[9][9];
        int ok = 1;

        for(i = 0; i < 9; i++)
        {
            for(j = 0; j < 9; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }

        /* linhas */
        for(i = 0; i < 9 && ok; i++)
        {
            int v[10] = {0};

            for(j = 0; j < 9; j++)
            {
                v[mat[i][j]]++;

                if(v[mat[i][j]] > 1)
                {
                    ok = 0;
                    break;
                }
            }
        }

        /* colunas */
        for(j = 0; j < 9 && ok; j++)
        {
            int v[10] = {0};

            for(i = 0; i < 9; i++)
            {
                v[mat[i][j]]++;

                if(v[mat[i][j]] > 1)
                {
                    ok = 0;
                    break;
                }
            }
        }

        /* blocos 3x3 */
        for(l = 0; l < 9 && ok; l += 3)
        {
            for(c = 0; c < 9 && ok; c += 3)
            {
                int v[10] = {0};

                for(i = l; i < l + 3; i++)
                {
                    for(j = c; j < c + 3; j++)
                    {
                        v[mat[i][j]]++;

                        if(v[mat[i][j]] > 1)
                        {
                            ok = 0;
                            break;
                        }
                    }

                    if(!ok)
                        break;
                }
            }
        }

        printf("Instancia %d\n", caso);

        if(ok)
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }

    return 0;
}
