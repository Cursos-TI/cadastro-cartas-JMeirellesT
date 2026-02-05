#include <stdio.h>

int main() {
    char cidade[50], cidade2[50];
    char estado[50], estado2[50];
    char codigo[50], codigo2[50];

    unsigned long int populacao, populacao2;
    float area, area2;
    float pib, pib2;
    int ptur, ptur2;

    float dens_p, dens_p2;
    float pib_per_capita, pib_per_capita2;
    float super_poder1, super_poder2;

    int r_pop, r_area, r_pib, r_ptur, r_dens, r_ppc, r_sp;

    /* =======================
       ENTRADA DE DADOS
       ======================= */

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
    scanf("%lu", &populacao);
    printf("Digite a população da cidade 2:\n");
    scanf("%lu", &populacao2);

    printf("Digite a área em km² da cidade 1:\n");
    scanf("%f", &area);
    printf("Digite a área em km² da cidade 2:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade 1 (em bilhões de reais):\n");
    scanf("%f", &pib);
    printf("Digite o PIB da cidade 2 (em bilhões de reais):\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da cidade 1:\n");
    scanf("%d", &ptur);
    printf("Digite o número de pontos turísticos da cidade 2:\n");
    scanf("%d", &ptur2);

    /* =======================
       CÁLCULOS
       ======================= */

    dens_p = (float)populacao / area;
    dens_p2 = (float)populacao2 / area2;

    pib_per_capita = (pib * 1000000000.0f) / (float)populacao;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    super_poder1 =
        (populacao / 1000000.0f) +
        area +
        (pib * 100.0f) +
        (ptur * 10.0f) +
        (pib_per_capita / 1000.0f) +
        (1.0f / dens_p) * 1000.0f;

    super_poder2 =
        (populacao2 / 1000000.0f) +
        area2 +
        (pib2 * 100.0f) +
        (ptur2 * 10.0f) +
        (pib_per_capita2 / 1000.0f) +
        (1.0f / dens_p2) * 1000.0f;

    /* =======================
       EXIBIÇÃO DAS CARTAS
       ======================= */

    printf("\n===== CARTA 1 =====\n");
    printf("Cidade: %s\n", cidade);
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado, codigo);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", ptur);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_p);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\n===== CARTA 2 =====\n");
    printf("Cidade: %s\n", cidade2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2, codigo2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %d\n", ptur2);
    printf("Densidade Populacional: %.2f hab/km²\n", dens_p2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    /* =======================
       COMPARAÇÃO DAS CARTAS
       ======================= */

    r_pop = populacao > populacao2;
    r_area = area > area2;
    r_pib = pib > pib2;
    r_ptur = ptur > ptur2;
    r_dens = dens_p < dens_p2; // menor vence
    r_ppc = pib_per_capita > pib_per_capita2;
    r_sp = super_poder1 > super_poder2;

    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    printf("População: Carta %d venceu (%d)\n", r_pop ? 1 : 2, r_pop);
    printf("Área: Carta %d venceu (%d)\n", r_area ? 1 : 2, r_area);
    printf("PIB: Carta %d venceu (%d)\n", r_pib ? 1 : 2, r_pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", r_ptur ? 1 : 2, r_ptur);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", r_dens ? 1 : 2, r_dens);
    printf("PIB per Capita: Carta %d venceu (%d)\n", r_ppc ? 1 : 2, r_ppc);
    printf("Super Poder: Carta %d venceu (%d)\n", r_sp ? 1 : 2, r_sp);

    return 0;
}
