#include <stdio.h>

int main() {
    // Dados da Carta 1 (pré-definidos)
    char nome1[50] = "Brasil";
    int populacao1 = 213993437;
    float area1 = 8515767.049;
    float pib1 = 1.445;
    int pontos_turisticos1 = 50;
    float densidade1 = populacao1 / area1;

    // Dados da Carta 2 (pré-definidos)
    char nome2[50] = "Argentina";
    int populacao2 = 45195777;
    float area2 = 2780400;
    float pib2 = 0.389;
    int pontos_turisticos2 = 40;
    float densidade2 = populacao2 / area2;

    int opcao1, opcao2;
    float valor1_1, valor1_2, valor2_1, valor2_2;
    char atributo1[50], atributo2[50];

    // Menu para escolher o primeiro atributo
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao1);

    // Atribuindo os valores com base na escolha do primeiro atributo
    switch (opcao1) {
        case 1:
            valor1_1 = populacao1;
            valor2_1 = populacao2;
            printf("Atributo escolhido: População\n");
            break;
        case 2:
            valor1_1 = area1;
            valor2_1 = area2;
            printf("Atributo escolhido: Área\n");
            break;
        case 3:
            valor1_1 = pib1;
            valor2_1 = pib2;
            printf("Atributo escolhido: PIB\n");
            break;
        case 4:
            valor1_1 = pontos_turisticos1;
            valor2_1 = pontos_turisticos2;
            printf("Atributo escolhido: Pontos Turísticos\n");
            break;
        case 5:
            valor1_1 = densidade1;
            valor2_1 = densidade2;
            printf("Atributo escolhido: Densidade Demográfica\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            return 1; // Encerra o programa com erro
    }

    // Menu para escolher o segundo atributo
    printf("\nEscolha o segundo atributo para comparação:\n");
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade Demográfica\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao2);

    // Atribuindo os valores com base na escolha do segundo atributo
    switch (opcao2) {
        case 1:
            valor1_2 = populacao1;
            valor2_2 = populacao2;
            printf("Atributo escolhido: População\n");
            break;
        case 2:
            valor1_2 = area1;
            valor2_2 = area2;
            printf("Atributo escolhido: Área\n");
            break;
        case 3:
            valor1_2 = pib1;
            valor2_2 = pib2;
            printf("Atributo escolhido: PIB\n");
            break;
        case 4:
            valor1_2 = pontos_turisticos1;
            valor2_2 = pontos_turisticos2;
            printf("Atributo escolhido: Pontos Turísticos\n");
            break;
        case 5:
            valor1_2 = densidade1;
            valor2_2 = densidade2;
            printf("Atributo escolhido: Densidade Demográfica\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            return 1; // Encerra o programa com erro
    }

    // Exibindo os valores das cartas para os atributos escolhidos
    printf("\nComparação de cartas:\n");
    printf("Atributo 1:\n");
    printf("%s: %.2f\n", nome1, valor1_1);
    printf("%s: %.2f\n", nome2, valor2_1);
    printf("\nAtributo 2:\n");
    printf("%s: %.2f\n", nome1, valor1_2);
    printf("%s: %.2f\n", nome2, valor2_2);

    // Comparando os atributos individualmente
    int vitorias_carta1 = 0, vitorias_carta2 = 0;

    // Comparação do primeiro atributo
    if (opcao1 == 5) {
        // Para Densidade Demográfica, o menor valor vence
        if (valor1_1 < valor2_1) vitorias_carta1++;
        else if (valor2_1 < valor1_1) vitorias_carta2++;
    } else {
        // Para os outros atributos, o maior valor vence
        if (valor1_1 > valor2_1) vitorias_carta1++;
        else if (valor2_1 > valor1_1) vitorias_carta2++;
    }

    // Comparação do segundo atributo
    if (opcao2 == 5) {
        // Para Densidade Demográfica, o menor valor vence
        if (valor1_2 < valor2_2) vitorias_carta1++;
        else if (valor2_2 < valor1_2) vitorias_carta2++;
    } else {
        // Para os outros atributos, o maior valor vence
        if (valor1_2 > valor2_2) vitorias_carta1++;
        else if (valor2_2 > valor1_2) vitorias_carta2++;
    }

    // Soma dos atributos
    float soma_carta1 = valor1_1 + valor1_2;
    float soma_carta2 = valor2_1 + valor2_2;

    // Exibindo a soma dos atributos
    printf("\nSoma dos atributos:\n");
    printf("%s: %.2f\n", nome1, soma_carta1);
    printf("%s: %.2f\n", nome2, soma_carta2);

    // Determinando o vencedor
    if (vitorias_carta1 > vitorias_carta2) {
        printf("\nResultado: %s venceu!\n", nome1);
    } else if (vitorias_carta2 > vitorias_carta1) {
        printf("\nResultado: %s venceu!\n", nome2);
    } else {
        // Em caso de empate, comparar a soma dos atributos
        if (soma_carta1 > soma_carta2) {
            printf("\nResultado: %s venceu pela soma dos atributos!\n", nome1);
        } else if (soma_carta2 > soma_carta1) {
            printf("\nResultado: %s venceu pela soma dos atributos!\n", nome2);
        } else {
            printf("\nResultado: Empate!\n");
        }
    }

    return 0;
}