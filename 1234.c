/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1234
Data        : 08/06/2026
Objetivo    : Sentença Dançante
Aprendizado : strings
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char cifra[51];

    while(fgets(cifra, 51, stdin) != NULL)
    {
        int controle = 0;

        for(int i = 0; i < strlen(cifra); i++)
        {
            if(cifra[i] == ' ')
                continue;

            if(controle % 2 == 0)
                cifra[i] = toupper(cifra[i]);
            else
                cifra[i] = tolower(cifra[i]);

            controle++;
        }

        printf("%s", cifra);
    }

    return 0;
}
