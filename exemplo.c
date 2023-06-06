#include<stdio.h>
#include<stdlib.h>

int main(){

    int L, C;
    float NOTAS[2][5], SOMA;
    for(L = 0; L < 2; L++){
        for(C = 0; C < 5; C++){
            printf("Digite a nota %d do aluno %d\n", C, L);
            scanf("%f", &NOTAS[L][C]);
        }
    }
    for(L = 0; L < 2; L++){
        SOMA = 0;
        for(C = 0; C < 5; C++){
            SOMA+= NOTAS[L][C];
        }
        printf("A media das notas do aluno %d eh: %.2f\n", L, (SOMA/5));
    }

    system("pause");
    return 0;
}
