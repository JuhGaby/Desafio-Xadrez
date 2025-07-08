#include <stdio.h>

// Constantes globais para os movimentos
const int MOV_TORRE = 3;
const int MOV_BISPO = 3;
const int MOV_RAINHA = 4;

// Função recursiva para o movimento da Torre (direita)
void moverTorre(int casas) {
    // Caso base da recursão
    if (casas <= 0) return;
    
    printf("Direita\n");
    moverTorre(casas - 1);  // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (diagonal superior direita)
void moverBispo(int casas) {
    // Caso base da recursão
    if (casas <= 0) return;
    
    printf("Movimento diagonal %d:\n", MOV_BISPO - casas + 1);
    
    /* 
     * Loops aninhados para movimento diagonal:
     * - Loop externo controla movimento vertical (cima)
     * - Loop interno controla movimento horizontal (direita)
     */
    for (int vertical = 1; vertical <= casas; vertical++) {
        int horizontal = 1;
        while (horizontal <= casas) {
            if (vertical == horizontal) {  // Condição para movimento diagonal
                printf("Cima, Direita\n");
                break;  // Apenas um movimento por passo
            }
            horizontal++;
        }
    }
    
    moverBispo(casas - 1);  // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (esquerda)
void moverRainha(int casas) {
    // Caso base da recursão
    if (casas <= 0) return;
    
    printf("Esquerda\n");
    moverRainha(casas - 1);  // Chamada recursiva
}

// Função para movimento complexo do Cavalo (2 cima, 1 direita)
void moverCavalo() {
    const int PASSOS_CIMA = 2;
    const int PASSOS_DIREITA = 1;
    int passos_realizados = 0;
    
    printf("Movimento do Cavalo em L:\n");
    
    /* 
     * Estrutura complexa com loops aninhados:
     * - Loop for para controle geral das etapas
     * - Condicionais para selecionar o tipo de movimento
     * - Uso de break e continue para controle de fluxo
     */
    for (int etapa = 0; etapa < 2; etapa++) {
        // Primeira etapa: movimento vertical (2 cima)
        if (etapa == 0) {
            int passo = 1;
            while (1) {  // Loop controlado por break
                if (passo > PASSOS_CIMA) {
                    break;
                }
                printf("Cima\n");
                passos_realizados++;
                
                // Demonstração de continue
                if (passos_realizados < PASSOS_CIMA) {
                    continue;
                }
                passo++;
            }
        }
        // Segunda etapa: movimento horizontal (1 direita)
        else {
            for (int passo = 1; passo <= PASSOS_DIREITA; passo++) {
                printf("Direita\n");
                passos_realizados++;
                
                // Condição para demonstração de break
                if (passos_realizados >= PASSOS_CIMA + PASSOS_DIREITA) {
                    break;
                }
            }
        }
    }
}

int main() {
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ AVANÇADO ===\n\n");

    // Torre - movimento recursivo
    printf("Torre: %d movimentos para direita (recursivo)\n", MOV_TORRE);
    moverTorre(MOV_TORRE);
    printf("\n");

    // Bispo - movimento recursivo com loops aninhados
    printf("Bispo: %d movimentos diagonais (recursivo + loops)\n", MOV_BISPO);
    moverBispo(MOV_BISPO);
    printf("\n");

    // Rainha - movimento recursivo
    printf("Rainha: %d movimentos para esquerda (recursivo)\n", MOV_RAINHA);
    moverRainha(MOV_RAINHA);
    printf("\n");

    // Cavalo - movimento com loops complexos
    printf("Cavalo: movimento em L (2 cima, 1 direita)\n");
    moverCavalo();
    printf("\n");

    return 0;
}