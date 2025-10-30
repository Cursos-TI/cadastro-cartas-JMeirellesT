#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    char cidade[50];
    char cidade2[50];
    char estado[50];
    char estado2[50];
    char codigo[50];
    char codigo2[50];
    int populacao;
    int populacao2;
    float area;
    float area2;
    float pib;
    float pib2;
    int ptur;
    int ptur2;
    float dens_p;
    float dens_p2;
    float pib_per_capita;
    float pib_per_capita2;

    printf("Digite o nome da cidade 1: \n");
    scanf("%s", &cidade);
    printf("Digite o nome da cidade 2: \n");
    scanf("%s", &cidade2);

    printf("Digite uma letra de 'A' a 'H' representando o Estado 1: \n");
    scanf("%s", &estado);
    printf("Digite Digite uma letra de 'A' a 'H' representando o Estado 2: \n");
    scanf("%s", &estado2);

    printf("Digite o código da carta 1 (entre 01 e 04): \n");
    scanf("%s", &codigo);
    printf("Digite o código da carta 2 (entre 01 e 04): \n");
    scanf("%s", &codigo2);

    printf("Digite a população da cidade 1: \n");
    scanf("%d", &populacao);
    printf("Digite a população da cidade 2: \n");
    scanf("%d", &populacao2);

    printf("Digite a área em km2 da cidade 1: \n");
    scanf("%f", &area);
    printf("Digite a área em km2 da cidade 2: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 1: \n");
    scanf("%f", &pib);
    printf("Digite o PIB da cidade 2: \n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turisticos da cidade 1: \n");
    scanf("%i", &ptur);
    printf("Digite o número de pontos turisticos da cidade 2: \n");
    scanf("%i", &ptur2);

    //Calculos
    dens_p = populacao / area;
    dens_p2 = populacao2 / area2;
    pib_per_capita = (pib * 1000000000) / populacao;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;


    printf("Carta 1 \n");
    printf("Nome da Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Código: %s %s\n", estado, codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km2\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Numero de pontos turisticos: %d\n", ptur);
    printf("Densidade Populacional: %.2f hab/km2\n", dens_p);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);

    printf("Carta 2 \n");
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s %s\n",estado2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", ptur2);
    printf("Densidade Populacional: %.2f hab/km2\n", dens_p2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);

return 0;
} 
