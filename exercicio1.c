/*1. Dada uma matriz quadrada de ordem 5, separar os elementos da diagonal secundária em um
vetor*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 5

int main(){
    int MATRIZ[TAM][TAM], VETOR[TAM], L, C;
    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            printf("Digite o valor para a coluna %d e linha %d\n", C, L);
            scanf("%d", &MATRIZ[L][C]);
        }
    }

    printf("Os elementos da diagonal segundaria sao:\n");
    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            if(L + C == TAM-1){
                VETOR[L] = MATRIZ[L][C];
                printf("%d\t", VETOR[L]);
            }
        }
    }

    printf("\n");
    system("pause");
    return 0;
}
