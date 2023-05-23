/*6. Faça um programa que leia e armazene 5 valores inteiros em um vetor VET1. Leia outros 5
valores inteiros e armazene num vetor VET2. A partir destes valores lidos, mostre na tela:
a. a soma dos elementos de cada vetor, nas respectivas posições;
b. a diferença dos elementos de cada vetor, nas respectivas posições;
c. o produto dos elementos de cada vetor, nas respectivas posições;
d. a divisão entre os elementos de cada vetor, nas respectivas posições (verificar divisão por
0).*/

#include<stdio.h>
#include<stdlib.h>

int somarVetores(int valor1, int valor2){
    return valor1+valor2;
}

int diferencaVetores(int valor1, int valor2){
    return valor1-valor2;
}

int produtoVetores(int valor1, int valor2){
    return valor1*valor2;
}

int divisaoVetores(int valor1, int valor2){
    return valor1/valor2;
}

int main(){
    int VET1[5], VET2[5], cont, soma, diferenca, produto, divisao;
    cont=soma=diferenca=produto=divisao=0;

    for(cont=0; cont<5; cont++){
        do{
            printf("Digite um valor para a posicao %d do primeiro vetor: \n", cont);
            scanf("%d", &VET1[cont]);
        }while(VET1[cont]<=0);
    }

    for(cont=0; cont<5; cont++){
        do{
            printf("Digite um valor para a posicao %d do segundo vetor: \n", cont);
            scanf("%d", &VET2[cont]);
        }while(VET2[cont]<=0);
    }

    for(cont=0; cont<5; cont++){
        printf("-----------------------------------------------------------------------\n");
        soma = somarVetores(VET1[cont], VET2[cont]);
        printf("A soma dos itens da posicao %d dos dois vetores e: %d\n", cont, soma);
        diferenca = diferencaVetores(VET1[cont], VET2[cont]);
        printf("A diferenca dos itens da posicao %d dos dois vetores e: %d\n", cont, diferenca);
        produto = produtoVetores(VET1[cont], VET2[cont]);
        printf("O produto dos itens da posicao %d dos dois vetores e: %d\n", cont, produto);
        divisao = divisaoVetores(VET1[cont], VET2[cont]);
        printf("A divisao dos itens da posicao %d dos dois vetores e: %d\n", cont, divisao);
        printf("-----------------------------------------------------------------------\n");
    }

    system("pause");
    return 0;
}
