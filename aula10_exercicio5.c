/*4. Dado um vetor N contendo 15 valores positivos digitados por você, separa num vetor P os valores
pares e num vetor I os valores impares. Depois mostre somente os valores pares e impares em
seus respectivos vetores. Utilize procedimento.*/

#include<stdio.h>
#include<stdlib.h>

int verificarParOuImpar(int valor){
    if(valor%2==0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int N[15],P[15];
    int cont, valor, contPar, contImpar;
    cont=valor=contPar=contImpar=0;
    for(cont=0; cont<15; cont++){
        printf("Digite um valor para a posicao %d do vetor: \n", cont);
        scanf("%d", &valor);
        if(verificarParOuImpar(valor)==0){
            P[contPar] = valor;
            contPar++;
        } else{
            N[contImpar] = valor;
            contImpar++;
        }
    }
    printf("--------------------------------------\n");
    printf("Valores pares presente no vetor:\n");
    if(contPar!=0){
        for(cont=0;cont<contPar;cont++){
            printf("[%d] - %d\n", cont, P[cont]);
        }
    }else{
        printf("Nenhum valor par encontrado.\n");
    }
    printf("--------------------------------------\n");
    printf("Valores impares presente no vetor:\n");
    if(contImpar!=0){
        for(cont=0;cont<contImpar;cont++){
            printf("[%d] - %d\n", cont, N[cont]);
        }
    }else{
        printf("Nenhum valor impapar encontrado.\n");
    }
    printf("--------------------------------------\n");


    system("pause");
    return 0;
}
