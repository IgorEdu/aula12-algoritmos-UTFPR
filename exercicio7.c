/*7. Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos de
cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal
e secundária são todos iguais. Dada uma matriz quadrada A (n x m), verificar se A é um quadrado
mágico. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 3

int main(){
    int M[TAM][TAM], L, C, SOMA, COMPARAR, QUADRADO_MAGICO;
    COMPARAR = SOMA = L = C = 0;
    srand((unsigned) time(NULL));
    QUADRADO_MAGICO = 1;

    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            M[L][C] = rand()%20;
            //M[L][C] = 1;
            printf("%d\t", M[L][C]);
        }
        printf("\n");
    }

    for(L = 0; L<TAM; L++){
        SOMA = 0;
        for(C = 0; C<TAM; C++){
            SOMA+=M[L][C];
        }
        if(L == 0)
            COMPARAR = SOMA;
            QUADRADO_MAGICO = 0;
        if(COMPARAR != SOMA){
            printf("A matriz nao possui as somas de suas linhas iguais.\n");
            QUADRADO_MAGICO = 1;
            break;
            //return 1;
        }
    }

    for(C = 0; C<TAM; C++){
        SOMA = 0;
        for(L = 0; L<TAM; L++){
            SOMA+=M[L][C];
        }
        if(COMPARAR != SOMA){
            printf("A matriz nao possui as somas de suas colunas iguais.\n");
            QUADRADO_MAGICO = 1;
            break;
            //return 1;
        }
    }

    SOMA = 0;
    //printf("A soma da diagonal secundaria: ");
    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            if(L == C){
                SOMA = SOMA + M[L][C];
            }
        }
    }
    if(COMPARAR != SOMA){
        printf("A matriz nao possui a soma dos elementos da diagonal principal igual.\n");
        QUADRADO_MAGICO = 1;
        //return 1;
    }

    SOMA = 0;
    //printf("A soma da diagonal secundaria: ");
    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            if(L + C == TAM-1){
                SOMA = SOMA + M[L][C];
            }
        }
    }
    if(COMPARAR != SOMA){
        printf("A matriz nao possui a soma dos elementos da diagonal secundaria igual\n");
        QUADRADO_MAGICO = 1;
        //return 1;
    }

    if(QUADRADO_MAGICO == 0){
        printf("A matriz apresentada eh um quadrado magico.\n");
    }
    else{
        printf("A matriz apresentada nao eh um quadrado magico.\n");
    }

    system("pause");
    return 0;
}
