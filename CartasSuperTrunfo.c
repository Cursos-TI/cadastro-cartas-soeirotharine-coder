#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

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

    int opcao;

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

    // ======= MENU INTERATIVO =======
    printf("\n=========================================\n");
    printf("        ⚔️ MENU DE COMPARAÇÃO ⚔️\n");
    printf("=========================================\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");
    printf("\nDigite a opção (1 a 7): ");
    scanf("%d", &opcao);

    printf("\n=========================================\n");
    printf("            RESULTADO DA COMPARAÇÃO\n");
    printf("=========================================\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %lu habitantes\n", nomeCidade1, populacao1);
            printf("%s: %lu habitantes\n", nomeCidade2, populacao2);
            if (populacao1 > populacao2)
                printf("\nVencedor: %s 🏆\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("\nVencedor: %s 🏆\n", nomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nomeCidade1, area1);
            printf("%s: %.2f km²\n", nomeCidade2, area2);
            if (area1 > area2)
                printf("\nVencedor: %s 🏆\n", nomeCidade1);
            else if (area2 > area1)
                printf("\nVencedor: %s 🏆\n", nomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
            printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
            if (pib1 > pib2)
                printf("\nVencedor: %s 🏆\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("\nVencedor: %s 🏆\n", nomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nomeCidade1, pontosTuristicos1);
            printf("%s: %d pontos\n", nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("\nVencedor: %s 🏆\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("\nVencedor: %s 🏆\n", nomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
            printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
            // regra inversa: menor vence
            if (densidade1 < densidade2)
                printf("\nVencedor: %s 🏆 (menor densidade)\n", nomeCidade1);
            else if (densidade2 < densidade1)
                printf("\nVencedor: %s 🏆 (menor densidade)\n", nomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f\n", nomeCidade1, pibPerCapita1);
            printf("%s: %.2f\n", nomeCidade2, pibPerCapita2);
            if (pibPerCapita1 > pibPerCapita2)
                printf("\nVencedor: %s 🏆\n", nomeCidade1);
            else if (pibPerCapita2 > pibPerCapita1)
                printf("\nVencedor: %s 🏆\n", nomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        case 7:
            printf("Atributo: Super Poder\n");
            printf("%s: %.2f\n", nomeCidade1, superPoder1);
            printf("%s: %.2f\n", nomeCidade2, superPoder2);
            if (superPoder1 > superPoder2)
                printf("\nVencedor: %s 🏆\n", nomeCidade1);
            else if (superPoder2 > superPoder1)
                printf("\nVencedor: %s 🏆\n", nomeCidade2);
            else
                printf("\nEmpate!\n");
            break;

        default:
            printf("\nOpção inválida! Escolha um número entre 1 e 7.\n");
            break;
    }

    printf("=========================================\n");
    printf("         Fim da Batalha Super Trunfo!\n");
    printf("=========================================\n");

    return 0;
}