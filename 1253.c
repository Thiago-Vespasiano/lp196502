/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1253
Data        : 11/06/2026
Objetivo    : cifra de cesar
Aprendizado : strings
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- *
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char cifra[51];
    int desloc;

    scanf("%d", &n);

    for(int k = 0; k < n; k++)
    {
        scanf("%s", cifra);
        scanf("%d", &desloc);

        for(int i = 0; i < strlen(cifra); i++)
        {
            cifra[i] = ((cifra[i] - 'A' - desloc + 26) % 26) + 'A';
        }

        printf("%s\n", cifra);
    }

    return 0;
}
