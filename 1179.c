/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1179
Data        : 16/06/2026
Objetivo    : preenchimento de vetores iv
Aprendizado : vetores
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- *
#include <stdio.h>

int main()
{
    int numero;
    int par[5], impar[5];
    int cp = 0, ci = 0;

    for(int i = 0; i < 15; i++)
    {
        scanf("%d", &numero);

        if(numero % 2 == 0)
        {
            par[cp] = numero;
            cp++;

            if(cp == 5)
            {
                for(int j = 0; j < 5; j++)
                    printf("par[%d] = %d\n", j, par[j]);

                cp = 0;
            }
        }
        else
        {
            impar[ci] = numero;
            ci++;

            if(ci == 5)
            {
                for(int j = 0; j < 5; j++)
                    printf("impar[%d] = %d\n", j, impar[j]);

                ci = 0;
            }
        }
    }

    for(int j = 0; j < ci; j++)
        printf("impar[%d] = %d\n", j, impar[j]);

    for(int j = 0; j < cp; j++)
        printf("par[%d] = %d\n", j, par[j]);

    return 0;
}
