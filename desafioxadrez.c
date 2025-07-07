#include <stdio.h>

int main() {
    // Definindo constantes para o número de movimentos de cada peça
    const int MOVIMENTOS_TORRE = 5;
    const int MOVIMENTOS_BISPO = 5;
    const int MOVIMENTOS_RAINHA = 8;
    
    // Constantes específicas para o movimento do Cavalo
    const int PASSOS_VERTICAIS = 2;    // 2 casas para baixo
    const int PASSOS_HORIZONTAIS = 1;  // 1 casa para a esquerda

    printf("=== SIMULAÇÃO DE MOVIMENTOS DE PEÇAS DE XADREZ ===\n\n");

    // 1. Movimento da Torre (usando for) - 5 casas para a direita
    printf("Torre: movendo %d casas para a direita\n", MOVIMENTOS_TORRE);
    for (int i = 1; i <= MOVIMENTOS_TORRE; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // 2. Movimento do Bispo (usando while) - 5 casas na diagonal superior direita
    printf("Bispo: movendo %d casas na diagonal superior direita\n", MOVIMENTOS_BISPO);
    int contador_bispo = 1;
    while (contador_bispo <= MOVIMENTOS_BISPO) {
        printf("Diagonal superior direita\n");
        contador_bispo++;
    }
    printf("\n");

    // 3. Movimento da Rainha (usando do-while) - 8 casas para a esquerda
    printf("Rainha: movendo %d casas para a esquerda\n", MOVIMENTOS_RAINHA);
    int contador_rainha = 1;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha <= MOVIMENTOS_RAINHA);
    printf("\n");

    // 4. Movimento do Cavalo (usando loops aninhados - for e while)
    printf("Cavalo: movimento em L (2 casas para baixo e 1 para a esquerda)\n");
    
    /* 
     * Lógica do movimento do Cavalo:
     * 1. Primeiro realiza os movimentos verticais (2 casas para baixo)
     * 2. Depois realiza os movimentos horizontais (1 casa para a esquerda)
     * Utilizamos um loop for para os movimentos verticais e while para os horizontais
     */
    
    // Parte vertical do movimento (for)
    printf("Movimentos verticais:\n");
    for (int passo_vertical = 1; passo_vertical <= PASSOS_VERTICAIS; passo_vertical++) {
        printf("Baixo\n");
    }
    
    // Parte horizontal do movimento (while)
    printf("Movimentos horizontais:\n");
    int passo_horizontal = 1;
    while (passo_horizontal <= PASSOS_HORIZONTAIS) {
        printf("Esquerda\n");
        passo_horizontal++;
    }

    return 0;
}