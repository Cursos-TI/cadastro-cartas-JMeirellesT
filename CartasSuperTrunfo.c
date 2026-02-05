#include <stdio.h>

int main() {

    char pais1[50] = "Brasil";
    char pais2[50] = "Alemanha";

    int populacao1 = 203000000;
    int populacao2 = 83000000;

    float area1 = 8515767.0;
    float area2 = 357022.0;

    float pib1 = 1869.0;   // em bilhões
    float pib2 = 3846.0;   // em bilhões

    int pontos_turisticos1 = 25;
    int pontos_turisticos2 = 30;

    float densidade1;
    float densidade2;

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;
    float soma_c1, soma_c2;

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    printf("===== SUPER TRUNFO - DESAFIO FINAL =====\n\n");
    printf("Carta 1: %s\n", pais1);
    printf("Carta 2: %s\n\n", pais2);

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo1);


    printf("\nEscolha o SEGUNDO atributo:\n");

    if (atributo1 != 1) printf("1 - População\n");
    if (atributo1 != 2) printf("2 - Área\n");
    if (atributo1 != 3) printf("3 - PIB\n");
    if (atributo1 != 4) printf("4 - Pontos Turísticos\n");
    if (atributo1 != 5) printf("5 - Densidade Demográfica\n");

    printf("Opção: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("\nErro: não é permitido escolher o mesmo atributo duas vezes.\n");
        return 0;
    }


    switch (atributo1) {
        case 1:
            valor1_c1 = populacao1;
            valor1_c2 = populacao2;
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            break;
        case 3:
            valor1_c1 = pib1;
            valor1_c2 = pib2;
            break;
        case 4:
            valor1_c1 = pontos_turisticos1;
            valor1_c2 = pontos_turisticos2;
            break;
        case 5:
            /* regra invertida */
            valor1_c1 = 1 / densidade1;
            valor1_c2 = 1 / densidade2;
            break;
        default:
            printf("Opção inválida no primeiro atributo.\n");
            return 0;
    }


    switch (atributo2) {
        case 1:
            valor2_c1 = populacao1;
            valor2_c2 = populacao2;
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            break;
        case 3:
            valor2_c1 = pib1;
            valor2_c2 = pib2;
            break;
        case 4:
            valor2_c1 = pontos_turisticos1;
            valor2_c2 = pontos_turisticos2;
            break;
        case 5:
            valor2_c1 = 1 / densidade1;
            valor2_c2 = 1 / densidade2;
            break;
        default:
            printf("Opção inválida no segundo atributo.\n");
            return 0;
    }


    soma_c1 = valor1_c1 + valor2_c1;
    soma_c2 = valor1_c2 + valor2_c2;

    printf("\n===== RESULTADO FINAL =====\n\n");

    printf("País 1: %s\n", pais1);
    printf("País 2: %s\n\n", pais2);

    printf("Valores comparados:\n");
    printf("%s -> %.2f + %.2f = %.2f\n", pais1, valor1_c1, valor2_c1, soma_c1);
    printf("%s -> %.2f + %.2f = %.2f\n\n", pais2, valor1_c2, valor2_c2, soma_c2);


    printf("Resultado: %s\n",
        soma_c1 > soma_c2 ? "Carta 1 venceu!" :
        soma_c2 > soma_c1 ? "Carta 2 venceu!" :
                            "Empate!"
    );

    return 0;
}
