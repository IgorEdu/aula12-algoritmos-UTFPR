/*3. Fa�a um programa que preenche uma matriz 10x10 com o produto dos �ndices de cada posi��o*/

#include<stdio.h>
#include<stdlib.h>
#define TAM 10

int main(){
    int MATRIZ[TAM][TAM], L, C;

    for(L=0; L<TAM; L++){
        for(C=0; C<TAM; C++){
            MATRIZ[L][C] = L*C;
        }
    }

    for(L=0; L<TAM; L++){
        for(C=0; C<TAM; C++){
            printf("%d\t", MATRIZ[L][C]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}
