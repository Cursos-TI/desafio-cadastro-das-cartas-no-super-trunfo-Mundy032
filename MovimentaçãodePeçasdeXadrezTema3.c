#include <stdio.h>

int main() {

        // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Direita (Casa %d)\n", i);
    }

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo:\n");
    int casa_bispo = 1;
    while (casa_bispo <= 5) {
        printf("Cima, Direita (Casa %d)\n", casa_bispo);
        casa_bispo++;
    }

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    int casa_rainha = 1;
    do {
        printf("Esquerda (Casa %d)\n", casa_rainha);
        casa_rainha++;
    } while (casa_rainha <= 8);

     // Definindo o número de casas a serem movidas como variáveis
     int casas_baixo = 2;
     int casas_esquerda = 1;
 
     // Movimento do Cavalo
     printf("\nMovimento do Cavalo:\n");
 
     // Loop para mover duas casas para baixo
     for (int i = 0; i < casas_baixo; i++) {
         printf("Baixo\n");
     }
 
     // Loop para mover uma casa para a esquerda
     int j = 0;
     while (j < casas_esquerda) {
         printf("Esquerda\n");
         j++;
    
     }
    // Função recursiva para o movimento da Torre
void mover_torre(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Direita\n");
    mover_torre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo
void mover_bispo(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Cima, Direita\n");
    mover_bispo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha
void mover_rainha(int casas) {
    if (casas <= 0) return; // Condição de parada da recursão
    printf("Esquerda\n");
    mover_rainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo com loops aninhados
void mover_cavalo() {
    for (int i = 1; i <= 2; i++) { // Duas casas para cima
        printf("Cima\n");
    }
    for (int j = 1; j <= 1; j++) { // Uma casa para a direita
        printf("Direita\n");
    }
}

// Função para o movimento do Bispo com loops aninhados
void mover_bispo_loops() {
    for (int i = 1; i <= 5; i++) { // Loop externo para o movimento vertical
        for (int j = 1; j <= 5; j++) { // Loop interno para o movimento horizontal
            if (i == j) { // Apenas na diagonal
                printf("Cima, Direita\n");
            }
        }
    }
}

int main() {
    // Movimento da Torre (5 casas para a direita)
    printf("Movimento da Torre:\n");
    mover_torre(5);

    // Movimento do Bispo (5 casas na diagonal para cima e à direita)
    printf("\nMovimento do Bispo (Recursivo):\n");
    mover_bispo(5);

    // Movimento da Rainha (8 casas para a esquerda)
    printf("\nMovimento da Rainha:\n");
    mover_rainha(8);

    // Movimento do Cavalo (em "L": duas casas para cima e uma para a direita)
    printf("\nMovimento do Cavalo:\n");
    mover_cavalo();

    // Movimento do Bispo com loops aninhados
    printf("\nMovimento do Bispo (Loops Aninhados):\n");
    mover_bispo_loops();

    
}


     return 0;



}