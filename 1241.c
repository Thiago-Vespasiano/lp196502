/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1241
Data        : 11/06/2026
Objetivo    : Encaixa ou Não II
Aprendizado : strings
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- *
#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d", &n);

    for(int k = 0; k < n; k++)
    {
        char a[1001];
        char b[1001];

        scanf("%s", a);
        scanf("%s", b);

        int tamA = strlen(a);
        int tamB = strlen(b);

        int encaixa = 1;

        if(tamB > tamA)
        {
            encaixa = 0;
        }
        else
        {
            int inicio = tamA - tamB;

            for(int i = 0; i < tamB; i++)
            {
                if(a[inicio + i] != b[i])
                {
                    encaixa = 0;
                    break;
                }
            }
        }

        if(encaixa)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }

    return 0;
}
