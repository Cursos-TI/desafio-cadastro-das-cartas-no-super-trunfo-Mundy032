#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3

// Função para verificar se uma posição está dentro do tabuleiro
int posicao_valida(int linha, int coluna) {
    return (linha >= 0 && linha < TAMANHO_TABULEIRO && 
            coluna >= 0 && coluna < TAMANHO_TABULEIRO);
}

// Função para verificar sobreposição de navios
int pode_posicionar(int tabuleiro[][TAMANHO_TABULEIRO], int linha, int coluna) {
    return (tabuleiro[linha][coluna] == 0);
}

// Função para exibir o tabuleiro
void exibir_tabuleiro(int tabuleiro[][TAMANHO_TABULEIRO]) {
    printf("\n  ");
    for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
        printf("%d ", j); // Cabeçalho das colunas
    }
    printf("\n");
    
    for (int i = 0; i < TAMANHO_TABULEIRO; i++) {
        printf("%d ", i); // Número da linha
        for (int j = 0; j < TAMANHO_TABULEIRO; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int main() {
    // Inicializa o tabuleiro com 0 (água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    printf("=== BATALHA NAVAL - NIVEL AVENTUREIRO ===\n");
    printf("Posicionando 4 navios (2 retos e 2 diagonais)\n");
    
    // 1. Navio horizontal (linha 2, coluna 3)
    int linha_h = 2, coluna_h = 3;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (posicao_valida(linha_h, coluna_h + i) && 
            pode_posicionar(tabuleiro, linha_h, coluna_h + i)) {
            tabuleiro[linha_h][coluna_h + i] = 3;
        }
    }
    
    // 2. Navio vertical (linha 5, coluna 7)
    int linha_v = 5, coluna_v = 7;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (posicao_valida(linha_v + i, coluna_v) && 
            pode_posicionar(tabuleiro, linha_v + i, coluna_v)) {
            tabuleiro[linha_v + i][coluna_v] = 3;
        }
    }
    
    // 3. Navio diagonal direita (linha 1, coluna 1)
    int linha_d1 = 1, coluna_d1 = 1;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (posicao_valida(linha_d1 + i, coluna_d1 + i) && 
            pode_posicionar(tabuleiro, linha_d1 + i, coluna_d1 + i)) {
            tabuleiro[linha_d1 + i][coluna_d1 + i] = 3;
        }
    }
    
    // 4. Navio diagonal esquerda (linha 0, coluna 7)
    int linha_d2 = 0, coluna_d2 = 7;
    for (int i = 0; i < TAMANHO_NAVIO; i++) {
        if (posicao_valida(linha_d2 + i, coluna_d2 - i) && 
            pode_posicionar(tabuleiro, linha_d2 + i, coluna_d2 - i)) {
            tabuleiro[linha_d2 + i][coluna_d2 - i] = 3;
        }
    }
    
    // Exibe o tabuleiro
    exibir_tabuleiro(tabuleiro);
    
    // Legenda
    printf("\nLegenda:\n");
    printf("0 - Agua\n");
    printf("3 - Navio\n");
    
    return 0;
}