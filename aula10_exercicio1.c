/*1. Encontrar o maior elemento e a sua respectiva posição de um vetor A com 15 elementos.*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int A[15], MAIOR = 0, POS_MAIOR = 0, i=0;

    for(i=0; i<15; i++){
        printf("Digite um valor inteiro para a posicao %d\n", i+1);
        scanf("%d", &A[i]);
    }

    for(i=0; i<15; i++){
        if(A[i]>MAIOR){
            MAIOR = A[i];
            POS_MAIOR = i;
        }
    }
    printf("O maior elemento do vetor e: %d e esta na posicao %d\n", MAIOR, POS_MAIOR);
    system("pause");
    return 0;
}
