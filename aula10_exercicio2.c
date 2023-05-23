/*2. Dado o vetor F com 20 elementos inteiros, substituir cada elemento por ele mesmo multiplicado
pela posição do elemento no conjunto.*/

#include<stdio.h>
#include<stdlib.h>
#define QUANT 20

int main(){
    int F[QUANT], i=0, novoValor = 0;

    for(i=0; i<QUANT; i++){
        printf("Digite um valor inteiro para a posicao %d: \n", i);
        scanf("%d", &F[i]);
    }

    for(i=0; i<QUANT; i++){
        novoValor = (F[i] * i);
        printf("O valor de %d multiplicado por sua posicao %d e igual a: %d\n", F[i], i, novoValor);
    }

    system("pause");
    return 0;
}
