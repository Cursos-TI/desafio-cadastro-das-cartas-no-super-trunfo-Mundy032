#include <stdio.h>

int main() {
    // Variáveis para armazenar os atributos da primeira cidade
    char codigo1[4]; // Código da carta (ex: A01, B02)
    char nome1[50];  // Nome da cidade
    int populacao1;  // População
    float area1;     // Área em km²
    double pib1;     // PIB em bilhões
    int pontos_turisticos1; // Número de pontos turísticos

    // Variáveis para propriedades calculadas da primeira cidade
    float densidade_populacional1; // Densidade populacional (população / área)
    double pib_per_capita1;        // PIB per capita (PIB / população)
    double super_poder1;           // Super Poder (soma de todas as propriedades)

    // Variáveis para armazenar os atributos da segunda cidade
    char codigo2[4]; // Código da carta (ex: A01, B02)
    char nome2[50];  // Nome da cidade
    int populacao2;  // População
    float area2;     // Área em km²
    double pib2;     // PIB em bilhões
    int pontos_turisticos2; // Número de pontos turísticos

    // Variáveis para propriedades calculadas da segunda cidade
    float densidade_populacional2; // Densidade populacional (população / área)
    double pib_per_capita2;        // PIB per capita (PIB / população)
    double super_poder2;           // Super Poder (soma de todas as propriedades)

    // Cadastro da Primeira Carta
    printf("=== Cadastro da Primeira Carta - Super Trunfo Países (Nível Mestre) ===\n");

    // Solicita os dados da primeira cidade
    printf("Código da carta (ex: A01, B02): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf("%s", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo das propriedades adicionais da primeira cidade
    densidade_populacional1 = (float)populacao1 / area1; // Densidade populacional
    pib_per_capita1 = (pib1 * 1e9) / populacao1;         // PIB per capita (convertendo PIB para unidades)
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + densidade_populacional1 + pib_per_capita1; // Super Poder

    // Cadastro da Segunda Carta
    printf("\n=== Cadastro da Segunda Carta - Super Trunfo Países (Nível Mestre) ===\n");

    // Solicita os dados da segunda cidade
    printf("Código da carta (ex: A01, B02): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf("%s", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo das propriedades adicionais da segunda cidade
    densidade_populacional2 = (float)populacao2 / area2; // Densidade populacional
    pib_per_capita2 = (pib2 * 1e9) / populacao2;         // PIB per capita (convertendo PIB para unidades)
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + densidade_populacional2 + pib_per_capita2; // Super Poder

    // Exibição dos Dados das Cartas
    printf("\n=== Dados da Primeira Cidade ===\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2lf bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2lf\n", pib_per_capita1);
    printf("Super Poder: %.2lf\n", super_poder1);

    printf("\n=== Dados da Segunda Cidade ===\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2lf\n", pib_per_capita2);
    printf("Super Poder: %.2lf\n", super_poder2);

    // Comparação das Cartas
    printf("\n=== Comparação das Cartas ===\n");

    // Comparação de População
    if (populacao1 > populacao2) {
        printf("População: %s (%d) vence %s (%d)\n", nome1, populacao1, nome2, populacao2);
    } else if (populacao2 > populacao1) {
        printf("População: %s (%d) vence %s (%d)\n", nome2, populacao2, nome1, populacao1);
    } else {
        printf("População: Empate entre %s e %s\n", nome1, nome2);
    }

    // Comparação de Área
    if (area1 > area2) {
        printf("Área: %s (%.2f km²) vence %s (%.2f km²)\n", nome1, area1, nome2, area2);
    } else if (area2 > area1) {
        printf("Área: %s (%.2f km²) vence %s (%.2f km²)\n", nome2, area2, nome1, area1);
    } else {
        printf("Área: Empate entre %s e %s\n", nome1, nome2);
    }

    // Comparação de PIB
    if (pib1 > pib2) {
        printf("PIB: %s (%.2lf bilhões) vence %s (%.2lf bilhões)\n", nome1, pib1, nome2, pib2);
    } else if (pib2 > pib1) {
        printf("PIB: %s (%.2lf bilhões) vence %s (%.2lf bilhões)\n", nome2, pib2, nome1, pib1);
    } else {
        printf("PIB: Empate entre %s e %s\n", nome1, nome2);
    }

    // Comparação de Pontos Turísticos
    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Pontos Turísticos: %s (%d) vence %s (%d)\n", nome1, pontos_turisticos1, nome2, pontos_turisticos2);
    } else if (pontos_turisticos2 > pontos_turisticos1) {
        printf("Pontos Turísticos: %s (%d) vence %s (%d)\n", nome2, pontos_turisticos2, nome1, pontos_turisticos1);
    } else {
        printf("Pontos Turísticos: Empate entre %s e %s\n", nome1, nome2);
    }

    // Comparação de Densidade Populacional (menor valor vence)
    if (densidade_populacional1 < densidade_populacional2) {
        printf("Densidade Populacional: %s (%.2f hab/km²) vence %s (%.2f hab/km²)\n", nome1, densidade_populacional1, nome2, densidade_populacional2);
    } else if (densidade_populacional2 < densidade_populacional1) {
        printf("Densidade Populacional: %s (%.2f hab/km²) vence %s (%.2f hab/km²)\n", nome2, densidade_populacional2, nome1, densidade_populacional1);
    } else {
        printf("Densidade Populacional: Empate entre %s e %s\n", nome1, nome2);
    }

    // Comparação de PIB per Capita
    if (pib_per_capita1 > pib_per_capita2) {
        printf("PIB per Capita: %s (%.2lf) vence %s (%.2lf)\n", nome1, pib_per_capita1, nome2, pib_per_capita2);
    } else if (pib_per_capita2 > pib_per_capita1) {
        printf("PIB per Capita: %s (%.2lf) vence %s (%.2lf)\n", nome2, pib_per_capita2, nome1, pib_per_capita1);
    } else {
        printf("PIB per Capita: Empate entre %s e %s\n", nome1, nome2);
    }

    // Comparação de Super Poder
    if (super_poder1 > super_poder2) {
        printf("Super Poder: %s (%.2lf) vence %s (%.2lf)\n", nome1, super_poder1, nome2, super_poder2);
    } else if (super_poder2 > super_poder1) {
        printf("Super Poder: %s (%.2lf) vence %s (%.2lf)\n", nome2, super_poder2, nome1, super_poder1);
    } else {
        printf("Super Poder: Empate entre %s e %s\n", nome1, nome2);
    }

    return 0;
}