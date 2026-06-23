/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1031
Data        : 22/06/2026
Objetivo    : crise de energia
Aprendizado : reforço
-------------------------------------------------------------------------- */
#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n) && n != 0)
    {
        int m = 1;

        while(1)
        {
            int ligado[100];
            int i;

            for(i = 1; i <= n; i++)
            {
                ligado[i] = 1;
            }

            ligado[1] = 0;

            int restantes = n - 1;
            int pos = 1;

            while(restantes > 1)
            {
                int cont = 0;

                while(cont < m)
                {
                    pos++;

                    if(pos > n)
                    {
                        pos = 1;
                    }

                    if(ligado[pos] == 1)
                    {
                        cont++;
                    }
                }

                ligado[pos] = 0;
                restantes--;
            }

            int ultima = 0;

            for(i = 1; i <= n; i++)
            {
                if(ligado[i] == 1)
                {
                    ultima = i;
                    break;
                }
            }

            if(ultima == 13)
            {
                printf("%d\n", m);
                break;
            }

            m++;
        }
    }

    return 0;
}
