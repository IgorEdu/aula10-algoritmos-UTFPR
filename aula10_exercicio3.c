/*3. Escreva a fun��o que recebe 2 par�metros: o primeiro par�metro � um vetor de inteiros e o
segundo par�metro � um n�mero. A fun��o deve retornar como resultado o segundo par�metro
assim como o n�mero de vezes que ele ocorre dentro do vetor. */

#include<stdio.h>
#include<stdlib.h>

int verificarRepeticao(int vetor[], int numero){
    int cont = 0, soma = 0;
    for(cont = 0; cont < 5; cont++){
        if(vetor[cont] == numero)
            soma++;
    }
    return soma;
}

int main(){
    int vetor[5], numero, i, repeticoes;
    numero=i=repeticoes=0;
    for(i=0; i<5; i++){
        printf("Digite um numero para a posicao %d do vetor exemplo:\n", i);
        scanf("%d", &vetor[i]);
    }
    printf("Digite um numero para verificar quantas vezes se repete no vetor exemplo:\n");
    scanf("%d", &numero);
    repeticoes=verificarRepeticao(vetor,numero);
    printf("\n");
    printf("A quantidade de vezes que o numero %d repete no vetor exemplo e: %d\n", numero, repeticoes);
    system("pause");
    return 0;
}
