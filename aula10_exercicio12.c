/*12. Fazer um programa que leia duas sequências de inteiros, não necessariamente contendo a mesma
quantidade de números, e construa um terceiro vetor, sem destruir os originais, que é a
concatenação do primeiro com o segundo. Ou seja, se o primeiro vetor contiver os valores [7 3] e
o segundo [9 2], a concatenação dos dois conterá [7 3 9 2]. A concatenação deve ser feita por uma
função. O tamanho máximo das sequências deve estar definido no programa. */

#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 100

int *concatenar(int *vetor1, int tamanhoVetor1, int *vetor2, int tamanhoVetor2)
{
  int tamanho1 = 0, tamanho2 = 0;
  int *vetorConcatenado;
  while (vetor1[tamanho1] != '\0')
  {
    tamanho1++;
  }
  while (vetor2[tamanho2] != '\0')
  {
    tamanho2++;
  }
  int tamanhoTotal = tamanho1 + tamanho2;
  vetorConcatenado = (int *)malloc(tamanhoTotal * sizeof(int));
  int i, j;
  for (i = 0; i < tamanho1; i++)
  {
    vetorConcatenado[i] = vetor1[i];
  }
  for (j = 0; j < tamanho2; j++)
  {
    vetorConcatenado[i + j] = toupper(vetor2[j]);
  }
  vetorConcatenado[tamanhoTotal] = '\0';
  return vetorConcatenado;
}

int main()
{
  int vetor1[MAXIMO / 2], vetor2[MAXIMO / 2];
  int *vetorConcatenado;
  int tamanhoVetor1, tamanhoVetor2, cont;
  tamanhoVetor1 = tamanhoVetor2 = cont = 0;

  do
  {
    if (tamanhoVetor1 < 0)
    {
      printf("O vetor não aceita valor de tamanho menor ou igual a zero. Digite novamente.\n");
    }
    else if (tamanhoVetor1 > (MAXIMO / 2))
    {
      printf("Tamanho escolhido maior que o valor maximo permitido [%d]. Digite novamente.\n", (MAXIMO / 2));
    }
    printf("Digite o tamanho do vetor 1\n");
    scanf("%d", &tamanhoVetor1);
  } while (tamanhoVetor1 <= 0);

  for (cont = 0; cont < tamanhoVetor1; cont++)
  {
    printf("Digite um valor para a posicao %d do vetor 1\n", cont);
    scanf("%d", &vetor1[cont]);
  }
  printf("-------------------------------------------------------------------------------------\n");
  do
  {
    if (tamanhoVetor2 < 0)
    {
      printf("O vetor não aceita valor de tamanho menor ou igual a zero. Digite novamente.\n");
    }
    else if (tamanhoVetor2 > (MAXIMO / 2))
    {
      printf("Tamanho escolhido maior que o valor maximo permitido [%d]. Digite novamente.\n", (MAXIMO / 2));
    }
    printf("Digite o tamanho do vetor 2\n");
    scanf("%d", &tamanhoVetor2);
  } while (tamanhoVetor2 <= 0);

  for (cont = 0; cont < tamanhoVetor2; cont++)
  {
    printf("Digite um valor para a posicao %d do vetor 2\n", cont);
    scanf("%d", &vetor2[cont]);
  }

  printf("-------------------------------------------------------------------------------------\n");
  printf("Vetor concatenado: \n");
  vetorConcatenado = concatenar(vetor1, tamanhoVetor1, vetor2, tamanhoVetor2);
  for (cont = 0; cont < (tamanhoVetor1 + tamanhoVetor2); cont++)
  {
    printf("[%d] - %d\n", cont, vetorConcatenado[cont]);
  }
  system("pause");
  return 0;
}