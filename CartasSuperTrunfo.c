#include <stdio.h>

int main() {

    printf("----[Seja bem vindo ao Super Trunfo]----\n\n");
    printf("----------[CADASTRO DE CARTAS]----------\n\n");

    // Variáveis da carta um
    char cod1[4];
    int pop1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis da carta dois
    char cod2[4];
    int pop2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Cadastro carta um
    printf("----------[CADASTRO DA CARTA1]----------\n\n");
    printf("Informe o código da cidade (ex: A01): ");
    scanf("%s", cod1);
    printf("Informe a populacao: ");
    scanf("%d", &pop1);
    printf("Informe a area (em km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro carta dois
    printf("\n\n----------[CADASTRO DA CARTA2]----------\n\n");
    printf("Informe o código da cidade (ex: B03): ");
    scanf("%s", cod2);
    printf("Informe a populacao: ");
    scanf("%d", &pop2);
    printf("Informe a area (em km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos dados da carta um
    printf("\n----------------[CARTA1]----------------\n");
    printf("-[Código: %s]-\n", cod1);
    printf("-[População: %d]-\n", pop1);
    printf("-[Área: %.2f km²]-\n", area1);
    printf("-[PIB: %.2f bilhões]-\n", pib1);
    printf("-[Pontos Turísticos: %d]-\n", pontosTuristicos1);

    // Exibição dos dados da carta dois
    printf("\n----------------[CARTA2]----------------\n");
    printf("-[Código: %s]-\n", cod2);
    printf("-[População: %d]-\n", pop2);
    printf("-[Área: %.2f km²]-\n", area2);
    printf("-[PIB: %.2f bilhões]-\n", pib2);
    printf("-[Pontos Turísticos: %d]-\n", pontosTuristicos2);
    return 0;
}
