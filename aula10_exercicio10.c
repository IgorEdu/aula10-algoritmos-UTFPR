/*10. Escreva um programa para ler 200 notas e armazená-las em um vetor. Admitindo-se que podem
haver erros no processo de digitação, algumas notas podem ser inválidas, isto é, fora do intervalo
entre 0 e 10. Considere a média como sendo 7,0. Desenvolver módulos (procedimentos ou
funções) para determinar o número de notas inválidas, a média das notas válidas e número de
notas acima da média.*/

#include <stdio.h>
#include <stdlib.h>
#define LEITURAS 200
#define MEDIA 7.0
#define MINIMO 0.0
#define MAXIMO 10.0

int verificarInvalidas(float nota)
{
  int i, invalida;
  i = invalida = 0;
  if (nota < MINIMO || nota > MAXIMO)
    return invalida = 1;
  else
    return invalida = 0;
}

int verificarAcimaMedia(float nota)
{
  int superioresMedia = 0;
  if (nota > MEDIA)
    return superioresMedia = 0;
  else
    return superioresMedia = 1;
}

int main()
{
  int validas, invalidas, superioresMedia, i;
  float somaValidas, mediaValidas;
  float notas[LEITURAS];
  somaValidas = mediaValidas = 0.0;
  validas = invalidas = superioresMedia = i = 0;

  for (i = 0; i < LEITURAS; i++)
  {
    printf("Digite o valor para a posicao %d do vetor\n", i);
    scanf("%f", &notas[i]);
    if (verificarInvalidas(notas[i]) == 0)
    {
      validas++;
      somaValidas += notas[i];
    }
    else
      invalidas++;

    if (verificarAcimaMedia(notas[i]) == 0)
      superioresMedia++;
  }

  mediaValidas = somaValidas / validas;

  printf("A quantidade de notas invalidas no conjunto de dados e: %d\n", invalidas);
  printf("A media das notas validas do conjunto de dados e: %.2f\n", mediaValidas);
  printf("A quantidade de notas acima da media no conjunto de dados e: %d\n", superioresMedia);

  system("pause");
  return 0;
}