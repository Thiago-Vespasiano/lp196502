/* --------------------------------------------------------------------------
Disciplina  : Lógica de Programação, turma IB, 2026S1
Nome        : Thiago Vespasiano Santos
Linguagem   : C
Problema    : https://judge.beecrowd.com/pt/problems/view/1175
Data        : 18/06/2026
Objetivo    : Troca em Vetor I
Aprendizado : vetores
Pergunta de segunda ordem:
-------------------------------------------------------------------------- */
#include <stdio.h>
int main (){
    int r[20];
    for (int i = 0; i <= 19; i++){
        scanf ("%d", &r[i]);
    }
    int n[20];
    
    for (int i = 19; i >= 0; i--){
        n[i] = r[19-i];
    }
    for (int i = 0; i <= 19; i++){
        printf ("N[%d] = %d\n", i, n[i]);
    }
    
    return 0;
    
}
