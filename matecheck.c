#include <stdio.h>

/* Constantes definidas no início do arquivo */
const int BISHOP_STEPS = 5;   /* Bispo: 5 casas na diagonal superior direita */
const int ROOK_STEPS   = 5;   /* Torre: 5 casas para a direita */
const int QUEEN_STEPS  = 8;   /* Rainha: 8 casas para a esquerda */

/* Protótipos */
void move_bishop_while(int steps);
void move_rook_for(int steps);
void move_queen_do_while(int steps);

int main(void) {
    printf("=== MateCheck - Movimentacoes (Nível Novato) ===\n\n");

    /* Movimentacao do bispo (diagonal) usando while */
    printf("-> Bispo (Diagonal superior direita) - usando WHILE\n");
    move_bishop_while(BISHOP_STEPS);
    printf("\n");

    /* Movimentacao da torre (direita) usando for */
    printf("-> Torre (Para a direita) - usando FOR\n");
    move_rook_for(ROOK_STEPS);
    printf("\n");

    /* Movimentacao da rainha (esquerda) usando do-while */
    printf("-> Rainha (Para a esquerda) - usando DO-WHILE\n");
    move_queen_do_while(QUEEN_STEPS);
    printf("\n");

    printf("=== Fim das movimentacoes ===\n");
    return 0;
}

/* 
 * move_bishop_while:
 *   Usa while para repetir o passo diagonal do bispo.
 *   Cada passo é representado por duas direções básicas combinadas:
 *   "Cima Direita"
 */
void move_bishop_while(int steps) {
    int i = 0;
    while (i < steps) {
        /* Exemplo de saída: "Passo 1: Cima Direita" */
        printf("Passo %d: Cima Direita\n", i + 1);
        i++;
    }
}

/* 
 * move_rook_for:
 *   Usa for para mover a torre para a direita.
 *   Imprime "Direita" a cada iteração.
 */
void move_rook_for(int steps) {
    for (int i = 0; i < steps; i++) {
        printf("Passo %d: Direita\n", i + 1);
    }
}

/*
 * move_queen_do_while:
 *   Usa do-while para mover a rainha para a esquerda.
 *   Imprime "Esquerda" e garante pelo menos uma iteração.
 */
void move_queen_do_while(int steps) {
    int i = 0;
    if (steps <= 0) {
        printf("Nenhum passo definido para a Rainha.\n");
        return;
    }
    do {
        printf("Passo %d: Esquerda\n", i + 1);
        i++;
    } while (i < steps);
}
