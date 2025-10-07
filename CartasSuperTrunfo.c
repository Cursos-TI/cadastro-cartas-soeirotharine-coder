#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1;
    char codigo1[5];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1, pib1, densidade1, pibPerCapita1, superPoder1;
    int pontosTuristicos1;

    // Variáveis da segunda carta
    char estado2;
    char codigo2[5];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2, pib2, densidade2, pibPerCapita2, superPoder2;
    int pontosTuristicos2;

    printf("=========================================\n");
    printf("      🏆 SUPER TRUNFO - BATALHA FINAL 🏆\n");
    printf("=========================================\n\n");

    // ======= CARTA 1 =======
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    printf("\n--- Carta 1 cadastrada com sucesso! ---\n\n");

    // ======= CARTA 2 =======
    printf("=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código (ex: A02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

    printf("\n--- Carta 2 cadastrada com sucesso! ---\n");

    // ======= EXIBIÇÃO DAS CARTAS =======
    printf("\n=========================================\n");
    printf("           CARTAS CADASTRADAS\n");
    printf("=========================================\n\n");

    printf("CARTA 1\n");
    printf("Estado: %c | Código: %s\n", estado1, codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("CARTA 2\n");
    printf("Estado: %c | Código: %s\n", estado2, codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // ======= COMPARAÇÃO =======
    printf("\n=============================================\n");
    printf("         🥇 RESULTADO DA BATALHA 🥇\n");
    printf("=============================================\n\n");

    printf("População:               %s\n", (populacao1 > populacao2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Área:                    %s\n", (area1 > area2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB:                     %s\n", (pib1 > pib2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Pontos Turísticos:       %s\n", (pontosTuristicos1 > pontosTuristicos2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Densidade Populacional:  %s\n", (densidade1 < densidade2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("PIB per Capita:          %s\n", (pibPerCapita1 > pibPerCapita2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");
    printf("Super Poder:             %s\n", (superPoder1 > superPoder2) ? "Carta 1 venceu (1)" : "Carta 2 venceu (0)");

    printf("\n=============================================\n");
    printf("         Fim da Batalha Super Trunfo!\n");
    printf("===============================================\n");

    return 0;
}