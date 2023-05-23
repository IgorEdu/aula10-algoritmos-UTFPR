#include<stdio.h>
#include<stdlib.h>

int main(){
    int I, POS_MENOR, POS_MAIOR;
    float NOTAS[5], MENOR = 10.0, MAIOR = 0.0;
    for(I=0;I<5;I++){
        printf("Digite uma nota\n");
        scanf("%f", &NOTAS[I]);
    }
    for(I=0;I<5;I++){
        printf("Nota %.1f\n", NOTAS[I]1. Encontrar o maior elemento e a sua respectiva posição de um vetor A com 15 elementos.);
    }
    for(I=0;I<5;I++){
        if(NOTAS[I] < MENOR){
            MENOR = NOTAS[I];
            POS_MENOR = I;
        }
        if(NOTAS[I] > MAIOR){
            MAIOR = NOTAS[I];
            POS_MAIOR = I;
        }
    }

    printf("A menor nota e: %.1f e esta na posicao %d\n", MENOR, POS_MENOR);
    printf("A maior nota e: %.1f e esta na posicao %d\n", MAIOR, POS_MAIOR);

    system("pause");
    return 0;
}
