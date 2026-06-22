/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1029
Data        : 17/04/2026
Objetivo    : Fibonacci, Quantas Chamadas?
Aprendizado : recursao
-------------------------------------------------------------------------- */
#include <stdio.h>

int calls;

int fib(int n)
{
    calls++;

    if(n == 0)
        return 0;

    if(n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int t, n;

    scanf("%d", &t);

    for(int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        calls = 0;

        int result = fib(n);

        printf("fib(%d) = %d calls = %d\n", n, calls - 1, result);
    }

    return 0;
}
