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

int main(){
    char sentence[51];
    int maiuscula = 1;

    while(fgets(sentence, 51, stdin) != NULL)
    {
        for(int i = 0; sentence[i] != '\0'; i++)
        {
            if(sentence[i] == ' ')
            {
                continue;
            }

            if(maiuscula == 1)
            {
                if(sentence[i] >= 'a' && sentence[i] <= 'z')
                {
                    sentence[i] = sentence[i] - 32;
                }

                maiuscula = 0;
            }
            else
            {
                if(sentence[i] >= 'A' && sentence[i] <= 'Z')
                {
                    sentence[i] = sentence[i] + 32;
                }

                maiuscula = 1;
            }
        }

        printf("%s", sentence);

        maiuscula = 1;
    }

    return 0;
}
