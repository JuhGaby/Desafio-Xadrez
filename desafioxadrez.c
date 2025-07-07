#include <stdio.h>

int main() {
    /* 
     * Simulador de movimentos de peças de xadrez
     * 
     * Este programa simula o movimento de três peças de xadrez:
     * - Torre: move-se em linha reta (usando for)
     * - Bispo: move-se na diagonal (usando while)
     * - Rainha: move-se em todas as direções (usando do-while)
     * 
     * Para cada peça, o movimento é simulado por um número fixo de casas
     * e a direção do movimento é impressa a cada casa percorrida.
     */
    
    // Constantes com o número de casas a serem movidas
    const int casas_torre = 5;
    const int casas_bispo = 5;
    const int casas_rainha = 8;
    
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ ===\n\n");
    
    // 1. Movimento da Torre (usando for)
    printf("\n[TORRE] Movendo %d casas para a direita:\n", casas_torre);
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n"); // Torre só se move em linha reta (horizontal/vertical)
    }
    
    // 2. Movimento do Bispo (usando while)
    printf("\n[BISPO] Movendo %d casas na diagonal para cima e direita:\n", casas_bispo);
    int contador_bispo = 1;
    while (contador_bispo <= casas_bispo) {
        printf("Cima, Direita\n"); // Bispo se move na diagonal
        contador_bispo++;
    }
    
    // 3. Movimento da Rainha (usando do-while)
    printf("\n[RAINHA] Movendo %d casas para a esquerda:\n", casas_rainha);
    int contador_rainha = 1;
    do {
        printf("Esquerda\n"); // Rainha pode se mover em qualquer direção (aqui só esquerda)
        contador_rainha++;
    } while (contador_rainha <= casas_rainha);
    
    printf("\n=== FIM DA SIMULACAO ===\n");
    
    return 0;
}