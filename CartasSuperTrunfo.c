#include <stdio.h>

int main() {
    // --- Variáveis da Carta 1 ---
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    char codigo1[4];
    float densidade1;
    float pibPerCapita1;

    // --- Variáveis da Carta 2 ---
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    char codigo2[4];
    float densidade2;
    float pibPerCapita2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib1);
    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);
    printf("\n");

    // --- CADASTRO DA CARTA 2 ---
    printf("--- Cadastro da Carta 2 ---\n");
    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigo2);
    printf("Digite a Populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // --- CÁLCULO DOS ATRIBUTOS DERIVADOS ---
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // --- EXIBIÇÃO DAS CARTAS CADASTRADAS ---
    printf("================================\n");
    printf("    CARTAS CADASTRADAS\n");
    printf("================================\n\n");

    printf("--- CARTA 1 (%s) ---\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: U$ %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("-> Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("-> PIB per Capita: U$ %.2f\n\n", pibPerCapita1);

    printf("--- CARTA 2 (%s) ---\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: U$ %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("-> Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("-> PIB per Capita: U$ %.2f\n", pibPerCapita2);
    
    return 0;
}
