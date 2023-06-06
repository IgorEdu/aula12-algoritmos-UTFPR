/*8. Escrever um programa que lê uma matriz M[6,6] e um valor A e multiplica a matriz M pelo valor
A e coloca os valores da matriz multiplicados por A em um vetor de V[36] e escreve no final o
vetor V.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define TAM 6

int main(){
    int MATRIZ[TAM][TAM], VETOR[TAM*TAM], A, L, C, I;
    L = C = I = 0;
    A = 5;

    for(L = 0; L < TAM; L++){
        for(C = 0; C < TAM; C++){
            MATRIZ[L][C] = rand()%20;
            //M[L][C] = 1;
            printf("%d\t", MATRIZ[L][C]);
            VETOR[I] = (MATRIZ[L][C] * A);
            I++;
        }
        printf("\n");
    }

    printf("\n");
    printf("Vetor com os valores multiplicados por A (%d):\n", A);

    for(I = 0; I<(TAM*TAM); I++){
        if(I<(TAM*TAM)-1){
            printf("%d,", VETOR[I]);
        } else{
            printf("%d\n", VETOR[I]);
        }
    }

    system("pause");
    return 0;
}
