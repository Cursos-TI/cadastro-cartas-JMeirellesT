#include <stdio.h>

int main() {

    /* =====================
       DECLARAÇÃO DAS VARIÁVEIS
       ===================== */

    char cidade[50];
    char cidade2[50];
    char estado[50];
    char estado2[50];
    char codigo[10];
    char codigo2[10];

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

    /* =====================
       ENTRADA DE DADOS
       ===================== */

    printf("Digite o nome da cidade 1:\n");
    scanf("%s", cidade);

    printf("Digite o nome da cidade 2:\n");
    scanf("%s", cidade2);

    printf("Digite uma letra de 'A' a 'H' representando o Estado 1:\n");
    scanf("%s", estado);

    printf("Digite uma letra de 'A' a 'H' representando o Estado 2:\n");
    scanf("%s", estado2);

    printf("Digite o código da carta 1 (entre 01 e 04):\n");
    scanf("%s", codigo);

    printf("Digite o código da carta 2 (entre 01 e 04):\n");
    scanf("%s", codigo2);

    printf("Digite a população da cidade 1:\n");
    scanf("%d", &populacao);

    printf("Digite a população da cidade 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a área em km² da cidade 1:\n");
    scanf("%f", &area);

    printf("Digite a área em km² da cidade 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 1:\n");
    scanf("%f", &pib);

    printf("Digite o PIB da cidade 2:\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 1:\n");
    scanf("%d", &ptur);

    printf("Digite o número de pontos turísticos da cidade 2:\n");
    scanf("%d", &ptur2);

    /* =====================
       CÁLCULOS
       ===================== */

    dens_p = populacao / area;
    dens_p2 = populacao2 / area2;

    pib_per_capita = pib / populacao;
    pib_per_capita2 = pib2 / populacao2;

    /* =====================
       EXIBIÇÃO DAS CARTAS
       ===================== */

    printf("\n===== CARTA 1 =====\n");
    printf("Nome da Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado, codigo);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Número de pontos turísticos: %d\n", ptur);
    printf("Densidade Populacional: %.2f\n", dens_p);
    printf("PIB per Capita: %.2f\n", pib_per_capita);

    printf("\n===== CARTA 2 =====\n");
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", ptur2);
    printf("Densidade Populacional: %.2f\n", dens_p2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);

    /* =====================
       COMPARAÇÃO DAS CARTAS
       ATRIBUTO ESCOLHIDO: POPULAÇÃO
       ===================== */

    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    printf("Atributo utilizado: População\n\n");

    printf("Carta 1 - %s (%s): %d\n", cidade, estado, populacao);
    printf("Carta 2 - %s (%s): %d\n\n", cidade2, estado2, populacao2);

    if (populacao > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade);
    } 
    else if (populacao2 > populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } 
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
