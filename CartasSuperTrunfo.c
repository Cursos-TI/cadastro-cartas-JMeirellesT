#include <stdio.h>

int main() {
    char pais1[50] = "Brasil";
    char pais2[50] = "Argentina";

    int populacao1 = 203000000;
    int populacao2 = 46000000;

    float area1 = 8515767.0;
    float area2 = 2780400.0;

    float pib1 = 1869.0;   // em bilhões
    float pib2 = 632.0;    // em bilhões

    int pontos_turisticos1 = 25;
    int pontos_turisticos2 = 18;

    float densidade1;
    float densidade2;

    int opcao;


    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;


    printf("===== SUPER TRUNFO - COMPARAÇÃO =====\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    printf("\n===== RESULTADO DA COMPARAÇÃO =====\n");

    /* =====================
       COMPARAÇÃO COM SWITCH
       ===================== */

    switch (opcao) {

        case 1:
            printf("Atributo escolhido: População\n\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2:
            printf("Atributo escolhido: Área\n\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n\n", pais2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3:
            printf("Atributo escolhido: PIB\n\n");
            printf("%s: %.2f bilhões\n", pais1, pib1);
            printf("%s: %.2f bilhões\n\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4:
            printf("Atributo escolhido: Pontos Turísticos\n\n");
            printf("%s: %d\n", pais1, pontos_turisticos1);
            printf("%s: %d\n\n", pais2, pontos_turisticos2);

            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5:
            printf("Atributo escolhido: Densidade Demográfica\n\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n\n", pais2, densidade2);

            /* REGRA INVERTIDA */
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 5.\n");
            break;
    }

    return 0;
}
