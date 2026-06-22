/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1000
Data        : 22/06/2026
Objetivo    : Camisetas
Aprendizado : structs
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

typedef struct
{
    char nome[100];
    char cor[20];
    char tamanho;
} Camiseta;

int corValor(char cor[])
{
    if(strcmp(cor, "branco") == 0)
        return 0;
    else
        return 1;
}

int tamanhoValor(char t)
{
    if(t == 'P') return 0;
    if(t == 'M') return 1;
    return 2; // G
}

int main()
{
    int n;
    Camiseta v[60];

    int first = 1;

    while(scanf("%d", &n) && n != 0)
    {
        getchar();

        for(int i = 0; i < n; i++)
        {
            fgets(v[i].nome, 100, stdin);
            v[i].nome[strcspn(v[i].nome, "\n")] = '\0';

            scanf("%s %c", v[i].cor, &v[i].tamanho);
            getchar();
        }

        // ordenação simples (bubble sort)
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                int troca = 0;

                if(corValor(v[i].cor) > corValor(v[j].cor))
                    troca = 1;

                else if(corValor(v[i].cor) == corValor(v[j].cor))
                {
                    if(tamanhoValor(v[i].tamanho) > tamanhoValor(v[j].tamanho))
                        troca = 1;

                    else if(tamanhoValor(v[i].tamanho) == tamanhoValor(v[j].tamanho))
                    {
                        if(strcmp(v[i].nome, v[j].nome) > 0)
                            troca = 1;
                    }
                }

                if(troca)
                {
                    Camiseta aux = v[i];
                    v[i] = v[j];
                    v[j] = aux;
                }
            }
        }

        if(!first)
            printf("\n");
        first = 0;

        for(int i = 0; i < n; i++)
        {
            printf("%s %c %s\n", v[i].cor, v[i].tamanho, v[i].nome);
        }
    }

    return 0;
}
