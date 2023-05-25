/*11. Escreva uma função que recebe um vetor e seu tamanho. A função deve trocar o primeiro
elemento com o último, o segundo elemento com o penúltimo, até o meio do vetor.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 100

void trocarPosicoes(int vetor[], int tamanhoVetor)
{
  int vetorAlterado[tamanhoVetor], cont, esquerda, direita;
  cont = esquerda = 0;
  direita = tamanhoVetor - 1;
  while (cont <= (tamanhoVetor / 2))
  {
    // if (tamanhoVetor % 2 == 0)
    //{
    vetorAlterado[esquerda] = vetor[direita];
    vetorAlterado[direita] = vetor[esquerda];
    //}
    esquerda++;
    direita--;
    cont++;
  }
  printf("Vetor com as posições alteradas: \n");
  for (cont = 0; cont < tamanhoVetor; cont++)
  {
    printf("\t[%d] - %d\n", cont, vetorAlterado[cont]);
  }
}

int main()
{
  int vetor[MAXIMO], tamanhoVetor, cont;
  tamanhoVetor = cont = 0;

  do
  {
    if (tamanhoVetor > MAXIMO)
      printf("Tamanho do vetor excede o tamanho maximo. Digite novamente\n");
    else if (tamanhoVetor <= 0)
      printf("Vetor nao pode ter tamanho menor ou igual a 0. Digite novamente\n");
    else if (tamanhoVetor == 1)
      printf("Para esse exemplo o menor tamanho possivel do vetor precisa ser maior que 1. Digite novamente\n");
    printf("Digite o valor do tamanho do vetor\n");
    scanf("%d", &tamanhoVetor);
  } while (tamanhoVetor > MAXIMO || tamanhoVetor < 2);

  for (cont = 0; cont < tamanhoVetor; cont++)
  {
    printf("Digite um valor para a posicao %d do vetor\n", cont);
    scanf("%d", &vetor[cont]);
  }
  trocarPosicoes(vetor, tamanhoVetor);

  system("pause");
  return 0;
}