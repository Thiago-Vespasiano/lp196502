#include <stdio.h>

#define N 9

int tabuleiro[N][N] = {
    {5,3,0,0,7,0,0,0,0},
    {6,0,0,1,9,5,0,0,0},
    {0,9,8,0,0,0,0,6,0},

    {8,0,0,0,6,0,0,0,3},
    {4,0,0,8,0,3,0,0,1},
    {7,0,0,0,2,0,0,0,6},

    {0,6,0,0,0,0,2,8,0},
    {0,0,0,4,1,9,0,0,5},
    {0,0,0,0,8,0,0,7,9}
};

void mostrar()
{
    int i, j;

    printf("\n");

    for(i = 0; i < N; i++)
    {
        for(j = 0; j < N; j++)
        {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}

int valido(int l, int c, int val)
{
    int i, j;

    // linha
    for(i = 0; i < N; i++)
        if(tabuleiro[l][i] == val)
            return 0;

    // coluna
    for(i = 0; i < N; i++)
        if(tabuleiro[i][c] == val)
            return 0;

    // bloco 3x3
    int li = (l / 3) * 3;
    int ci = (c / 3) * 3;

    for(i = li; i < li + 3; i++)
        for(j = ci; j < ci + 3; j++)
            if(tabuleiro[i][j] == val)
                return 0;

    return 1;
}

int completo()
{
    int i, j;

    for(i = 0; i < N; i++)
        for(j = 0; j < N; j++)
            if(tabuleiro[i][j] == 0)
                return 0;

    return 1;
}

int main()
{
    int l, c, val;

    while(1)
    {
        mostrar();

        if(completo())
        {
            printf("Sudoku completo!\n");
            break;
        }

        printf("Digite linha coluna valor (0 para sair): ");
        scanf("%d", &l);

        if(l == 0)
            break;

        scanf("%d %d", &c, &val);

        if(l < 1 || l > 9 || c < 1 || c > 9 || val < 1 || val > 9)
        {
            printf("Entrada invalida!\n");
            continue;
        }

        l--;
        c--;

        if(tabuleiro[l][c] != 0)
        {
            printf("Posicao ja preenchida!\n");
            continue;
        }

        if(valido(l, c, val))
        {
            tabuleiro[l][c] = val;
        }
        else
        {
            printf("Jogada invalida!\n");
        }
    }

    return 0;
}
