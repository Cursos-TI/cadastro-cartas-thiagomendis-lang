#include <stdio.h>
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
      int carta;
    char cidade[50];
    int populacao;
    float area;
    int pib;
    int turistico;

    printf("Digite a carta: \n");
    scanf("%d", &carta);

    printf("Digite a cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a populção: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o PIB: \n");
    scanf("%d", &pib);

    printf("Digite pontos turisticos: \n");
    scanf("%d", &turistico);

    printf("A carta é: %d", carta);
    printf("A Cidade é: %s", cidade);
    printf("A polulaçao é: %d", populacao);
    printf("A area é: %f", area);
    printf("O PIB é: %d", pib);
    printf("Os pontos turisticos sao: %d", turistico);

    return 0;

} 
