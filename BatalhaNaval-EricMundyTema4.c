#include <stdio.h>

#define TAMANHO_TABULEIRO 10
#define TAMANHO_NAVIO 3
#define TAMANHO_HABILIDADE 5

// Funções de verificação
int posicao_valida(int linha, int coluna) {
    return (linha >= 0 && linha < TAMANHO_TABULEIRO && 
            coluna >= 0 && coluna < TAMANHO_TABULEIRO);
}

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

// Funções para criar matrizes de habilidade
void criar_cone(int habilidade[][TAMANHO_HABILIDADE]) {
    int centro = TAMANHO_HABILIDADE / 2;
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (i >= centro && j >= (centro - (i - centro)) && j <= (centro + (i - centro))) {
                habilidade[i][j] = 1; // Área afetada
            } else {
                habilidade[i][j] = 0; // Área não afetada
            }
        }
    }
}

void criar_cruz(int habilidade[][TAMANHO_HABILIDADE]) {
    int centro = TAMANHO_HABILIDADE / 2;
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            if (i == centro || j == centro) {
                habilidade[i][j] = 1; // Área afetada
            } else {
                habilidade[i][j] = 0; // Área não afetada
            }
        }
    }
}

void criar_octaedro(int habilidade[][TAMANHO_HABILIDADE]) {
    int centro = TAMANHO_HABILIDADE / 2;
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            int dist = abs(i - centro) + abs(j - centro);
            if (dist <= centro) {
                habilidade[i][j] = 1; // Área afetada
            } else {
                habilidade[i][j] = 0; // Área não afetada
            }
        }
    }
}

// Função para aplicar habilidade ao tabuleiro
void aplicar_habilidade(int tabuleiro[][TAMANHO_TABULEIRO], 
                       int habilidade[][TAMANHO_HABILIDADE], 
                       int linha_origem, int coluna_origem) {
    int offset = TAMANHO_HABILIDADE / 2;
    
    for (int i = 0; i < TAMANHO_HABILIDADE; i++) {
        for (int j = 0; j < TAMANHO_HABILIDADE; j++) {
            int linha = linha_origem - offset + i;
            int coluna = coluna_origem - offset + j;
            
            if (posicao_valida(linha, coluna) && habilidade[i][j] == 1) {
                if (tabuleiro[linha][coluna] == 0) {
                    tabuleiro[linha][coluna] = 5; // Área afetada pela habilidade
                }
            }
        }
    }
}

int main() {
    // Inicializa o tabuleiro com 0 (água)
    int tabuleiro[TAMANHO_TABULEIRO][TAMANHO_TABULEIRO] = {0};
    
    printf("=== BATALHA NAVAL - NIVEL MESTRE ===\n");
    printf("Posicionando navios e habilidades especiais\n");
    
    // Posiciona os navios (do nível aventureiro)
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
    
    // Cria e aplica habilidades especiais
    int cone[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};
    int cruz[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};
    int octaedro[TAMANHO_HABILIDADE][TAMANHO_HABILIDADE] = {0};
    
    criar_cone(cone);
    criar_cruz(cruz);
    criar_octaedro(octaedro);
    
    // Aplica habilidades ao tabuleiro
    aplicar_habilidade(tabuleiro, cone, 4, 4);       // Cone centrado em (4,4)
    aplicar_habilidade(tabuleiro, cruz, 7, 2);       // Cruz centrada em (7,2)
    aplicar_habilidade(tabuleiro, octaedro, 3, 6);   // Octaedro centrado em (3,6)
    
    // Exibe o tabuleiro
    exibir_tabuleiro(tabuleiro);
    
    // Legenda
    printf("\nLegenda:\n");
    printf("0 - Agua\n");
    printf("3 - Navio\n");
    printf("5 - Area afetada por habilidade\n");
    
    return 0;
}