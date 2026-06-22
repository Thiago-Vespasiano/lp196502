/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1441
Data        : 22/06/2026
Objetivo    : Sequências de Granizo
Aprendizado : recursiva
-------------------------------------------------------------------------- */
#include <stdio.h>

int maior;

void collatz(long long n)
{
    if(n > maior)
        maior = n;

    if(n == 1)
        return;

    if(n % 2 == 0)
        collatz(n / 2);
    else
        collatz(3 * n + 1);
}

int main()
{
    long long n;

    while(1)
    {
        scanf("%lld", &n);

        if(n == 0)
            break;

        maior = n;

        collatz(n);

        printf("%d\n", maior);
    }

    return 0;
}
