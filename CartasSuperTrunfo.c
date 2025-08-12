#include <stdio.h>

int main() {
    // --- Variáveis da Carta 1 ---
    unsigned long int populacao1; // Tipo alterado para o nível Mestre
    float area1;
    float pib1;
    int pontosTuristicos1;
    char codigo1[4];
    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // --- Variáveis da Carta 2 ---
    unsigned long int populacao2; // Tipo alterado para o nível Mestre
    float area2;
    float pib2;
    int pontosTuristicos2;
    char codigo2[4];
    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // --- CADASTRO DA CARTA 1 ---
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigo1);
    printf("Digite a Populacao: ");
    scanf("%lu", &populacao1); // Formatador %lu para unsigned long int
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
    scanf("%lu", &populacao2); // Formatador %lu para unsigned long int
    printf("Digite a Area (em km2): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &pib2);
    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);
    printf("\n");

    // --- CÁLCULO DOS ATRIBUTOS DERIVADOS ---
    // Carta 1
    densidade1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = (float)populacao1 + area1 + (pib1 * 1000000000) + (float)pontosTuristicos1 + pibPerCapita1 + (1.0f / densidade1);

    // Carta 2
    densidade2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = (float)populacao2 + area2 + (pib2 * 1000000000) + (float)pontosTuristicos2 + pibPerCapita2 + (1.0f / densidade2);

    // --- COMPARAÇÃO E RESULTADOS ---
    printf("================================\n");
    printf("    RESULTADO DA COMPARACAO\n");
    printf("================================\n");

    // População (maior é melhor)
    if (populacao1 > populacao2) {
        printf("Populacao: Vencedor -> 1\n");
    } else {
        printf("Populacao: Vencedor -> 0\n");
    }

    // Área (maior é melhor)
    if (area1 > area2) {
        printf("Area: Vencedor -> 1\n");
    } else {
        printf("Area: Vencedor -> 0\n");
    }

    // PIB (maior é melhor)
    if (pib1 > pib2) {
        printf("PIB: Vencedor -> 1\n");
    } else {
        printf("PIB: Vencedor -> 0\n");
    }
    
    // Pontos Turísticos (maior é melhor)
    if (pontosTuristicos1 > pontosTuristicos2) {
        printf("Pontos Turisticos: Vencedor -> 1\n");
    } else {
        printf("Pontos Turisticos: Vencedor -> 0\n");
    }

    // Densidade Populacional (MENOR é melhor)
    if (densidade1 < densidade2) {
        printf("Densidade Populacional: Vencedor -> 1\n");
    } else {
        printf("Densidade Populacional: Vencedor -> 0\n");
    }

    // PIB per Capita (maior é melhor)
    if (pibPerCapita1 > pibPerCapita2) {
        printf("PIB per Capita: Vencedor -> 1\n");
    } else {
        printf("PIB per Capita: Vencedor -> 0\n");
    }

    printf("--------------------------------\n");
    // Super Poder (maior é melhor)
    if (superPoder1 > superPoder2) {
        printf("SUPER PODER: Vencedor -> 1\n");
    } else {
        printf("SUPER PODER: Vencedor -> 0\n");
    }
    printf("--------------------------------\n");

    return 0;
}