/*6. Escreva um programa que lê uma matriz M[5,5] e calcula as somas:
a) da linha 4 de M;
b) da coluna 2 de M;
c) da diagonal principal;
d) da diagonal secundária;
e) de todos os elementos da matriz;
Escreva estas somas e a matriz. */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 5

int main(){
    int M[TAM][TAM], L, C, SOMA;
    SOMA = L = C = 0;
    srand((unsigned) time(NULL));

    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            M[L][C] = rand()%20;
            printf("%d\t", M[L][C]);
        }
        printf("\n");
    }

    SOMA = 0;
    printf("\n");
    printf("A soma dos elementos da linha 4: ");
    for(C=0;C<TAM;C++){
        SOMA = SOMA + M[3][C];
    }
    printf("%d\n", SOMA);

    SOMA = 0;
    printf("A soma dos elementos da coluna 2: ");
    for(L=0;L<TAM;L++){
        SOMA = SOMA + M[L][1];
    }
    printf("%d\n", SOMA);

    SOMA = 0;
    printf("A soma da diagonal principal: ");
    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            if(L == C){
                SOMA = SOMA + M[L][C];
            }
        }
    }
    printf("%d\n", SOMA);

    SOMA = 0;
    printf("A soma da diagonal secundaria: ");
    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            if(L + C == TAM-1){
                SOMA = SOMA + M[L][C];
            }
        }
    }
    printf("%d\n", SOMA);


    SOMA = 0;
    printf("A soma de todos os elementos da matriz: ");
    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            SOMA = SOMA + M[L][C];
        }
    }
    printf("%d\n", SOMA);

    system("pause");
    return 0;
}
