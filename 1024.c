/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1024
Data        : 11/06/2026
Objetivo    : Criptografia
Aprendizado : strings
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- *
#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d", &n);
    getchar();

    for(int k = 0; k < n; k++)
    {
        char frase[1001];

        fgets(frase, 1001, stdin);

        frase[strcspn(frase, "\n")] = '\0';

        for(int i = 0; i < strlen(frase); i++)
        {
            if((frase[i] >= 'A' && frase[i] <= 'Z') ||
               (frase[i] >= 'a' && frase[i] <= 'z'))
            {
                frase[i] += 3;
            }
        }

        int tam = strlen(frase);

        for(int i = 0, j = tam - 1; i < j; i++, j--)
        {
            char aux = frase[i];
            frase[i] = frase[j];
            frase[j] = aux;
        }

        int meio = tam / 2;

        for(int i = meio; i < tam; i++)
        {
            frase[i]--;
        }

        printf("%s\n", frase);
    }

    return 0;
}
