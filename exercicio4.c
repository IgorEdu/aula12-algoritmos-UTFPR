/*4. Encontrar o maior elemento e a sua respectiva posição de uma matriz B de dimensão 7x5.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int MATRIZ[7][5], MAIOR, L, C, L_MAIOR, C_MAIOR;
    MAIOR = L_MAIOR = C_MAIOR = L = C = 0;
    srand((unsigned) time(NULL));

    for(L = 0; L < 7; L++){
        for(C = 0; C < 5; C++){
            //printf("Digite o valor para a coluna %d e linha %d\n", C, L);
            //scanf("%d", &MATRIZ[L][C]);
            MATRIZ[L][C] = rand()%100;
            if(MATRIZ[L][C] > MAIOR){
                MAIOR = MATRIZ[L][C];
                L_MAIOR = L;
                C_MAIOR = C;
            }
        }
    }

    printf("O maior numero da matriz eh: %d. E esta na posicao [%d][%d]\n", MAIOR, L_MAIOR, C_MAIOR);

    system("pause");
    return 0;
}
