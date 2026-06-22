/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1028
Data        : 22/06/2026
Objetivo    : figurinhas
Aprendizado : recursiva
-------------------------------------------------------------------------- */
#include <stdio.h>

int mdc(int a, int b)
{
    if(b == 0)
        return a;

    return mdc(b, a % b);
}

int main()
{
    int n, f1, f2;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &f1, &f2);

        int resultado = mdc(f1, f2);

        printf("%d\n", resultado);
    }

    return 0;
}
