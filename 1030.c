/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1030
Data        : 22/06/2026
Objetivo    : A Lenda de Flavious Josephus
Aprendizado : recursividade
-------------------------------------------------------------------------- */
#include <stdio.h>

int josephus(int n, int k)
{
    if(n == 1)
        return 0;

    return (josephus(n - 1, k) + k) % n;
}

int main()
{
    int t;

    scanf("%d", &t);

    for(int i = 1; i <= t; i++)
    {
        int n, k;

        scanf("%d %d", &n, &k);

        printf("Case %d: %d\n", i, josephus(n, k) + 1);
    }

    return 0;
}
