/*8. Escreva uma fun��o que recebe um vetor, seu tamanho e um n�mero X. Mostre a posi��o de cada
elemento igual a X deste vetor.*/

#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 20

void retornarPosicoesVetor(int vetor[], int tamanho, int X)
{
    int i, quant;
    i = quant = 0;
    printf("Posicoes do vetor que possuem o valor igual ao valor de X - %d\n", X);
    for (i = 0; i < tamanho; i++)
    {
        if (vetor[i] == X)
        {
            printf("[%d]\t", i);
            quant++;
        }
    }
    printf("\n");
    if (quant == 0)
    {
        printf("Nao foi encontrado em nenhuma das posicoes do vetor o valor de X\n");
    }
    else
    {
        printf("Foram encontradas %d posicoes que possuem o mesmo valor de X\n", quant);
    }
}

int main()
{
    int vetor[MAXIMO];
    int tamanho, X, cont;
    tamanho = X = cont = 0;

    do
    {
        printf("Digite um valor para o tamanho do vetor exemplo\n");
        scanf("%d", &tamanho);
    } while (tamanho > MAXIMO);

    printf("------------------------------------------------------------------\n");
    for (cont = 0; cont < tamanho; cont++)
    {
        printf("Digite o valor para a posicao %d do vetor exemplo\n", cont);
        scanf("%d", &vetor[cont]);
    }

    printf("------------------------------------------------------------------\n");
    printf("Digite o valor de X que sera o valor a ser procurado no vetor\n");
    scanf("%d", &X);
    printf("Iniciando a verificacao...\n");
    printf("------------------------------------------------------------------\n");

    retornarPosicoesVetor(vetor, tamanho, X);
    system("pause");
    return 0;
}
