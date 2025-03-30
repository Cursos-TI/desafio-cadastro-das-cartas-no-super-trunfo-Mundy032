#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

int main() {
    // Inicializa o tabuleiro com 0 (água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    // Navio horizontal (linha 2, coluna 3)
    int navio_horizontal[TAMANHO_NAVIO] = {3, 3, 3};
    int linha_h = 2;
    int coluna_h = 3;
    
    // Navio vertical (linha 5, coluna 7)
    int navio_vertical[TAMANHO_NAVIO] = {3, 3, 3};
    int linha_v = 5;
    int coluna_v = 7;
    
    // Posiciona navio horizontal
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        // Verifica se está dentro do tabuleiro
        if (coluna_h + i < TAMANHO_TABULEIRO) {
            tabuleiro[linha_h][coluna_h + i] = navio_horizontal[i];
        }
    }
    
    // Posiciona navio vertical
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        // Verifica se está dentro do tabuleiro
        if (linha_v + i < TAMANHO_TABULEIRO) {
            tabuleiro[linha_v + i][coluna_v] = navio_vertical[i];
        }
    }
    
    // Exibe o tabuleiro
    printf("Tabuleiro de Batalha Naval:\n\n");
    printf("  0 1 2 3 4 5 6 7 8 9\n"); // Cabeçalho das colunas
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d ", i); // Número da linha
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}