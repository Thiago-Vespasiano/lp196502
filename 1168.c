/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1168
Data        : 22/06/2026
Objetivo    : LED
Aprendizado : switch
-------------------------------------------------------------------------- */
#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    char num[1010];

    scanf("%d", &n);

    for(int k = 0; k < n; k++)
    {
        scanf("%s", num);

        int total = 0;

        for(int i = 0; i < strlen(num); i++)
        {
            switch(num[i])
            {
                case '0': total += 6; break;
                case '1': total += 2; break;
                case '2': total += 5; break;
                case '3': total += 5; break;
                case '4': total += 4; break;
                case '5': total += 5; break;
                case '6': total += 6; break;
                case '7': total += 3; break;
                case '8': total += 7; break;
                case '9': total += 6; break;
            }
        }

        printf("%d leds\n", total);
    }

    return 0;
}
