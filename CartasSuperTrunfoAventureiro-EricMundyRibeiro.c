#include <stdio.h>

int main() {
    // Variáveis para armazenar os atributos da cidade
    char codigo[4]; // Código da carta (ex: A01, B02)
    char nome[50];  // Nome da cidade
    int populacao;  // População
    float area;     // Área em km²
    double pib;     // PIB em bilhões
    int pontos_turisticos; // Número de pontos turísticos

    // Variáveis para propriedades calculadas
    float densidade_populacional; // Densidade populacional (população / área)
    double pib_per_capita;        // PIB per capita (PIB / população)

    // Cadastro da Carta
    printf("=== Cadastro de Carta - Super Trunfo Países (Nível Aventureiro) ===\n");

    // Solicita os dados da cidade
    printf("Código da carta (ex: A01, B02): ");
    scanf("%s", codigo);

    printf("Nome da cidade: ");
    scanf("%s", nome);

    printf("População: ");
    scanf("%d", &populacao);

    printf("Área (em km²): ");
    scanf("%f", &area);

    printf("PIB (em bilhões): ");
    scanf("%lf", &pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Cálculo das propriedades adicionais
    densidade_populacional = (float)populacao / area; // Densidade populacional
    pib_per_capita = (pib * 1e9) / populacao;         // PIB per capita (convertendo PIB para unidades)

    // Exibição dos Dados da Carta
    printf("\n=== Dados da Cidade Cadastrada ===\n");
    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional);
    printf("PIB per Capita: %.2lf\n", pib_per_capita);

    return 0;
}