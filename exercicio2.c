/*2. Achar a somatória de cada uma das linhas de uma matriz A (7x5).*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int MATRIZ[7][5], SOMA, L, C;
    SOMA = L = C = 0;

    for(L = 0; L < 7; L++){
        for(C = 0; C < 5; C++){
            printf("Digite o valor para a coluna %d e linha %d\n", C, L);
            scanf("%d", &MATRIZ[L][C]);
        }
    }

    for(L = 0; L < 7; L++){
        SOMA = 0;
        for(C = 0; C < 5; C++){
            SOMA+= MATRIZ[L][C];
        }
        printf("A soma dos valores da linha %d eh: %d\n", L+1, SOMA);
    }

    system("pause");
    return 0;
}
