#include <stdio.h>

// Função recursiva para o movimento da Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n"); 
        moverTorre(casas - 1);
    }
}

// Função recursiva para o movimento da Rainha (8 casas para a esquerda) 
void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1); 
    }
}

// Função recursiva para o Bispo (5 casas na diagonal Cima e Direita) 
// Utiliza lógica de loops aninhados dentro da recursão conforme requisito 
void moverBispo(int casas) {
    if (casas > 0) {
        // Simulação de movimento diagonal com loops aninhados 
        for (int v = 1; v <= 1; v++) { // Loop vertical externo 
            for (int h = 1; h <= 1; h++) { // Loop horizontal interno 
                printf("Cima Direita\n");
            }
        }
        moverBispo(casas - 1);
    }
}

int main() {
    // --- MOVIMENTAÇÃO DA TORRE ---
    printf("Movimento da Torre:\n");
    moverTorre(5);

    // --- MOVIMENTAÇÃO DO BISPO ---
    printf("\nMovimento do Bispo:\n");
    moverBispo(5);

    // --- MOVIMENTAÇÃO DA RAINHA ---
    printf("\nMovimento da Rainha:\n");
    moverRainha(8); 

    // --- MOVIMENTAÇÃO DO CAVALO (Loops Complexos) --- 
    // Movimento em L: 2 para cima, 1 para a direita 
    printf("\nMovimento do Cavalo:\n");
    
    // Loop aninhado com múltiplas variáveis e condições 
    for (int i = 0, j = 1; i < 2; i++) { 
        while (j > 0) {
            printf("Cima\n");
            j--; // Controle do loop interno
        }
        // Resetando j para a próxima iteração externa ou finalizando
        if (i == 1) {
            printf("Direita\n"); 
        } else {
            j = 1; // Prepara para a segunda casa "Cima"
        }
    }

    return 0;
}
