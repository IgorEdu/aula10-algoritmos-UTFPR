/*7. Dado 3 conjuntos de números, de tamanho N, calcular a média de cada um dos conjuntos*/

#include<stdio.h>
#include<stdlib.h>
#define N 3

int calcularMedia(int vetor[]){
    int cont, soma, media;
    cont=soma=media=0;
    for(cont=0; cont<N; cont++){
        soma+=vetor[cont];
    }
    media = soma/N;
}

int main(){
    int CONJ1[N], CONJ2[N], CONJ3[N], cont, MEDIA1, MEDIA2, MEDIA3;
    cont=0;
    for(cont=0; cont<N; cont++){
        printf("Digite o valor para a posicao %d do primeiro conjunto de dados\n", cont);
        scanf("%d", &CONJ1[cont]);
    }
    for(cont=0; cont<N; cont++){
        printf("Digite o valor para a posicao %d do segundo conjunto de dados\n", cont);
        scanf("%d", &CONJ2[cont]);
    }
    for(cont=0; cont<N; cont++){
        printf("Digite o valor para a posicao %d do terceiro conjunto de dados\n", cont);
        scanf("%d", &CONJ3[cont]);
    }
    MEDIA1 = calcularMedia(CONJ1);
    MEDIA2 = calcularMedia(CONJ2);
    MEDIA3 = calcularMedia(CONJ3);

    printf("A media do primeiro conjunto de dados e: %d\n", MEDIA1);
    printf("A media do segundo conjunto de dados e: %d\n", MEDIA2);
    printf("A media do terceiro conjunto de dados e: %d\n", MEDIA3);
    system("pause");
    return 0;
}
