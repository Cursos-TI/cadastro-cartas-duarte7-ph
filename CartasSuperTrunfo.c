#include <stdio.h>

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado, estado2;
  char cidade[50], codigo[50];
  char cidade2[50], codigo2[50];
  int populacao, turismo;
  int populacao2, turismo2;
  float area, pib;
  float area2, pib2;

  // Área para exibição da carta 1
  printf("Insira o Estado da carta 1: ");
  scanf("%c", &estado);

  printf("Insira o Codigo da carta 1: ");
  scanf("%s", codigo);

  printf("Insira a Cidade da carta 1: ");
  scanf("%s", cidade);

  printf("Insira a Populacao da carta 1: ");
  scanf("%d", &populacao);

  printf("Insira a Area da carta 1: ");
  scanf("%f", &area);

  printf("Insira o PIB da carta 1: ");
  scanf("%f", &pib);

  printf("Insira os Pontos Turisticos da carta 1: ");
  scanf("%d", &turismo);

  // Área para exibiçõa da carta 2
  printf("\nInsira o Estado da carta 2: ");
  scanf(" %c", &estado2);

  printf("Insira o Codigo da carta 2: ");
  scanf(" %s", codigo2);

  printf("Insira a Cidade da carta 2: ");
  scanf(" %s", cidade2);

  printf("Insira a Populacao da carta 2: ");
  scanf(" %d", &populacao2);

  printf("Insira a Area da carta 2: ");
  scanf(" %f", &area2);

  printf("Insira o PIB da carta 2: ");
  scanf(" %f", &pib2);

  printf("Insira os Pontos Turisticos da carta 2: ");
  scanf(" %d", &turismo2);

  // Exibição das cartas 
  printf("\n------------------\n");
  printf("Dados da Carta 1:\n");
  printf("------------------\n");
  printf("Estado: %c\n", estado);
  printf("Codigo da Carta: %s\n", codigo);
  printf("Cidade: %s\n", cidade);
  printf("Populacao: %d\n", populacao);
  printf("Area: %f\n", area);
  printf("PIB: %f\n", pib);
  printf("Pontos Turisticos: %d\n", turismo);
  printf("------------------\n");
  
  printf("\n------------------\n");
  printf("Dados da Carta 2:\n");
  printf("------------------\n");
  printf("Estado: %c\n", estado2);
  printf("Codigo da Carta: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("Populacao: %d\n", populacao2);
  printf("Area: %f\n", area2);
  printf("PIB: %f\n", pib2);
  printf("Pontos Turisticos: %d\n", turismo2);
  printf("------------------\n");

  return 0;
}