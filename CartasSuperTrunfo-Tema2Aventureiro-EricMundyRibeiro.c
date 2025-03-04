#include <stdio.h>
#include <string.h>

// Estrutura para representar uma carta
typedef struct {
    char nome[50];          // Nome do país
    int populacao;          // População
    float area;             // Área em km²
    float pib;              // PIB em bilhões
    int pontos_turisticos;  // Número de pontos turísticos
    float densidade;        // Densidade demográfica (população / área)
} Carta;

// Função para calcular a densidade demográfica
float calcular_densidade(int populacao, float area) {
    return (float)populacao / area;
}

int main() {
    // Definindo duas cartas pré-cadastradas
    Carta carta1 = {"Brasil", 213993437, 8515767.049, 1.445, 50, 0};
    Carta carta2 = {"Argentina", 45195777, 2780400, 0.389, 40, 0};

    // Calculando a densidade demográfica para ambas as cartas
    carta1.densidade = calcular_densidade(carta1.populacao, carta1.area);
    carta2.densidade = calcular_densidade(carta2.populacao, carta2.area);

    int opcao;
    printf("=== Super Trunfo - Comparação de Cartas ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Digite o número da opção: ");
    scanf("%d", &opcao);

    // Variáveis para armazenar os valores dos atributos escolhidos
    float valor1, valor2;
    char atributo[50];

    // Atribuindo os valores com base na escolha do usuário
    switch (opcao) {
        case 1:
            valor1 = carta1.populacao;
            valor2 = carta2.populacao;
            strcpy(atributo, "População");
            break;
        case 2:
            valor1 = carta1.area;
            valor2 = carta2.area;
            strcpy(atributo, "Área");
            break;
        case 3:
            valor1 = carta1.pib;
            valor2 = carta2.pib;
            strcpy(atributo, "PIB");
            break;
        case 4:
            valor1 = carta1.pontos_turisticos;
            valor2 = carta2.pontos_turisticos;
            strcpy(atributo, "Pontos Turísticos");
            break;
        case 5:
            valor1 = carta1.densidade;
            valor2 = carta2.densidade;
            strcpy(atributo, "Densidade Demográfica");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            return 1; // Encerra o programa com erro
    }

    // Exibindo os valores das cartas para o atributo escolhido
    printf("\nComparação de cartas (Atributo: %s):\n", atributo);
    printf("%s: %.2f\n", carta1.nome, valor1);
    printf("%s: %.2f\n", carta2.nome, valor2);

    // Comparando as cartas com base no atributo escolhido
    if (opcao == 5) {
        // Para Densidade Demográfica, o menor valor vence
        if (valor1 < valor2) {
            printf("Resultado: %s venceu!\n", carta1.nome);
        } else if (valor2 < valor1) {
            printf("Resultado: %s venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    } else {
        // Para os outros atributos, o maior valor vence
        if (valor1 > valor2) {
            printf("Resultado: %s venceu!\n", carta1.nome);
        } else if (valor2 > valor1) {
            printf("Resultado: %s venceu!\n", carta2.nome);
        } else {
            printf("Resultado: Empate!\n");
        }
    }

    return 0;
}