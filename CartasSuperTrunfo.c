#include <stdio.h>

// Desafio Super Trunfo - Países
//Nível Mestre
// Objetivo: Implementando Comparações Avançadas com Atributos Múltiplos em C

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

    // Variáveis para escolha dos atributos
    int atributo1, atributo2;
    float valor1Carta1 = 0, valor1Carta2 = 0;
    float valor2Carta1 = 0, valor2Carta2 = 0;
    float soma1 = 0, soma2 = 0;

    printf("=========================================\n");
    printf("      🏆 SUPER TRUNFO - NIVEL MESTRE 🏆\n");
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

    // ======= ESCOLHA DOS ATRIBUTOS =======
    printf("\n=========================================\n");
    printf("          ESCOLHA DOS ATRIBUTOS\n");
    printf("=========================================\n");

    printf("\nAtributos disponíveis:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - Super Poder\n");

    // Primeiro atributo
    printf("\nEscolha o primeiro atributo (1-7): ");
    scanf("%d", &atributo1);

    // Segundo atributo (dinâmico)
    do {
        printf("Escolha o segundo atributo (1-7, diferente do primeiro): ");
        scanf("%d", &atributo2);
        if (atributo2 == atributo1)
            printf("⚠️  Você já escolheu esse atributo! Escolha outro.\n");
    } while (atributo2 == atributo1);

    // ======= COMPARAÇÃO =======
    printf("\n=========================================\n");
    printf("       🔍 COMPARAÇÃO DOS ATRIBUTOS 🔍\n");
    printf("=========================================\n\n");

    // Função auxiliar: define valores de cada atributo escolhido
    switch (atributo1) {
        case 1: valor1Carta1 = populacao1; valor1Carta2 = populacao2; break;
        case 2: valor1Carta1 = area1; valor1Carta2 = area2; break;
        case 3: valor1Carta1 = pib1; valor1Carta2 = pib2; break;
        case 4: valor1Carta1 = pontosTuristicos1; valor1Carta2 = pontosTuristicos2; break;
        case 5: valor1Carta1 = densidade1; valor1Carta2 = densidade2; break;
        case 6: valor1Carta1 = pibPerCapita1; valor1Carta2 = pibPerCapita2; break;
        case 7: valor1Carta1 = superPoder1; valor1Carta2 = superPoder2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    switch (atributo2) {
        case 1: valor2Carta1 = populacao1; valor2Carta2 = populacao2; break;
        case 2: valor2Carta1 = area1; valor2Carta2 = area2; break;
        case 3: valor2Carta1 = pib1; valor2Carta2 = pib2; break;
        case 4: valor2Carta1 = pontosTuristicos1; valor2Carta2 = pontosTuristicos2; break;
        case 5: valor2Carta1 = densidade1; valor2Carta2 = densidade2; break;
        case 6: valor2Carta1 = pibPerCapita1; valor2Carta2 = pibPerCapita2; break;
        case 7: valor2Carta1 = superPoder1; valor2Carta2 = superPoder2; break;
        default: printf("Atributo inválido!\n"); return 0;
    }

    // Comparação individual
    printf("Comparando primeiro atributo...\n");
    float resultado1 = (atributo1 == 5) ? // densidade = menor vence
        ((valor1Carta1 < valor1Carta2) ? 1 : 2) :
        ((valor1Carta1 > valor1Carta2) ? 1 : 2);

    printf("Comparando segundo atributo...\n");
    float resultado2 = (atributo2 == 5) ?
        ((valor2Carta1 < valor2Carta2) ? 1 : 2) :
        ((valor2Carta1 > valor2Carta2) ? 1 : 2);

    // Soma dos valores (como critério final)
    soma1 = valor1Carta1 + valor2Carta1;
    soma2 = valor1Carta2 + valor2Carta2;

    // ======= RESULTADO FINAL =======
    printf("\n=========================================\n");
    printf("           🏁 RESULTADO FINAL 🏁\n");
    printf("=========================================\n");

    printf("Carta 1: %s\n", nomeCidade1);
    printf("Carta 2: %s\n\n", nomeCidade2);

    printf("Atributo 1: %d | Carta 1: %.2f | Carta 2: %.2f | Vencedor: %s\n",
           atributo1, valor1Carta1, valor1Carta2,
           (resultado1 == 1) ? nomeCidade1 : nomeCidade2);

    printf("Atributo 2: %d | Carta 1: %.2f | Carta 2: %.2f | Vencedor: %s\n",
           atributo2, valor2Carta1, valor2Carta2,
           (resultado2 == 1) ? nomeCidade1 : nomeCidade2);

    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    if (soma1 > soma2)
        printf("\n🏆 %s venceu a rodada!\n", nomeCidade1);
    else if (soma2 > soma1)
        printf("\n🏆 %s venceu a rodada!\n", nomeCidade2);
    else
        printf("\n🤝 Empate!\n");

    printf("=========================================\n");
    printf("          Fim da Batalha! 🎮\n");
    printf("=========================================\n");

    return 0;
}