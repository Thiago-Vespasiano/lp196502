/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1534
Data        : 16/06/2026
Objetivo    : Matriz 123
Aprendizado : matrizes
Pergunta de segunda ordem: 
-------------------------------------------------------------------------- *
#include <stdio.h>
int main()
{
    /*freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);*/
    int z;
    while(scanf("%d",&z)!=EOF)
    {
        int ara[z][z];
        int a,b,c,d,e,f,g,h;
        for(a=0; a<z; a++)
        {
            for(b=0; b<z; b++)
                ara[a][b]=3;
        }
        for(a=0; a<z; a++)
            ara[a][a]=1;
        d=z-1;
        for(a=0,b=d; a<z;a++,b--)
            ara[a][b]=2;
        for(a=0; a<z; a++)
        {
            for(b=0; b<z; b++)
                printf("%d",ara[a][b]);
            printf("\n");
        }
    }
    return 0;
}
