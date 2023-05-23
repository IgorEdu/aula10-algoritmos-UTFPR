/*9. Sendo dado um conjunto A de 100 números inteiros, determinar 2 outros conjuntos, contendo o
primeiro conjunto os números negativos de A e o segundo conjunto os números que são múltiplos
de um número inteiro X. Observação: Considerar que existam pelo menos um múltiplo e um
negativo.
*/

#include<stdio.h>
#include<stdlib.h>
#define TAM_ARRAY 10

int main(){
    int A[TAM_ARRAY], NEGATIVOS[TAM_ARRAY], MULTIPLOS[TAM_ARRAY];
    int X, cont, valor, contNegativos, contMultiplos;
    cont = valor = contNegativos = contMultiplos = 0;

    for(cont=0; cont<TAM_ARRAY; cont++){
        printf("Digite um valor para a posicao %d do vetor exemplo: \n", cont);
        scanf("%d", &valor);
        A[cont] = valor;
        if(valor<0){
            NEGATIVOS[contNegativos] = valor;
            contNegativos++;
        }
    }

    printf("Digite um numero para mostrar os valores que sao divisiveis e estao no vetor exemplo: \n");
    scanf("%d", &X);
    printf("-----------------------------------------------------------------------------------------\n");
    printf("Os numeros que sao divisiveis por %d sao: \n", X);
    for(cont=0; cont<TAM_ARRAY; cont++){
        if(A[cont]%X==0){
            MULTIPLOS[contMultiplos] = A[cont];
            printf("[%d] - %d\n", contMultiplos, MULTIPLOS[contMultiplos]);
            contMultiplos++;
        }
    }
    printf("A quantidade de numeros que sao divisiveis por %d e: %d\n", X,contMultiplos);
    printf("-----------------------------------------------------------------------------------------\n");
    printf("Os numeros que sao negativos sao: \n");
    printf("-----------------------------------------------------------------------------------------\n");
    for(cont = 0; cont<contNegativos; cont++){
        printf("[%d] - %d\n", cont, NEGATIVOS[cont]);
    }
    printf("A quantidade de numeros negativos presentes no vetor e: %d\n", contNegativos);
    system("pause");
    return 0;
}
