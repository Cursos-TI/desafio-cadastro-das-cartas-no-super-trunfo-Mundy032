#include <stdio.h>

int main() {
    // Dados da Carta 1 (pré-definidos)
    char estado1[3] = "SP"; // Estado da Carta 1
    char nome1[50] = "São Paulo"; // Nome da cidade da Carta 1
    int populacao1 = 12300000; // População da Carta 1
    float area1 = 1521.11; // Área da Carta 1
    float pib1 = 450.75; // PIB da Carta 1

    // Dados da Carta 2 (pré-definidos)
    char estado2[3] = "RJ"; // Estado da Carta 2
    char nome2[50] = "Rio de Janeiro"; // Nome da cidade da Carta 2
    int populacao2 = 6700000; // População da Carta 2
    float area2 = 1200.25; // Área da Carta 2
    float pib2 = 300.50; // PIB da Carta 2

    // Cálculo da Densidade Populacional e PIB per capita
    float densidade1 = populacao1 / area1; // Densidade da Carta 1
    float densidade2 = populacao2 / area2; // Densidade da Carta 2

    float pib_per_capita1 = pib1 / populacao1; // PIB per capita da Carta 1
    float pib_per_capita2 = pib2 / populacao2; // PIB per capita da Carta 2

    // Escolha do atributo para comparação (neste caso, População)
    char atributo_escolhido[] = "População";
    float valor1 = populacao1; // Valor da Carta 1 para o atributo escolhido
    float valor2 = populacao2; // Valor da Carta 2 para o atributo escolhido

    // Exibindo os dados das cartas
    printf("Comparação de cartas (Atributo: %s):\n", atributo_escolhido);
    printf("Carta 1 - %s (%s): %.2f\n", nome1, estado1, valor1);
    printf("Carta 2 - %s (%s): %.2f\n", nome2, estado2, valor2);

    // Comparando as cartas
    if (valor1 > valor2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
    } else if (valor2 > valor1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}