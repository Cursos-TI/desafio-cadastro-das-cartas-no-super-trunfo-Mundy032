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
    
    
    
    return 0;


}