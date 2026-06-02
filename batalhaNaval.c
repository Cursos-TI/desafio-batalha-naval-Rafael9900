#include <stdio.h>


int main() {
    // 1. Representar o Tabuleiro (Matriz 10x10 inicializada com 0)
    int tabuleiro[10][10] = {0};

    // 2. Declarar e inicializar os vetores dos navios (Arrays Unidimensionais)
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};
    int navioDiagonal1[3] = {3,3,3};
    int navioDiagonal2[3] = {3,3,3};

    // Definição das coordenadas iniciais (Garantindo que não há sobreposição)
    // Navio Horizontal: linha 2, coluna 1 até a coluna 3
    int linhaNavioH = 2;
    int colunaInicialH = 1;

    // Navio Vertical: começará na linha 5 até a linha 7, na coluna 6
    int linhaInicialV = 5;
    int colunaNavioV = 6;

    // Navio Diagonal 1: começará na linha 6 coluna 0,
    int linhaInicialD1 = 6;
    int colunaNavioD1 = 0;

    // Navio Diagonal 2: começará na linha 1 coluna 5, até a linha 3 na coluna 7
    int linhaInicialD2 = 1;
    int colunaNavioD2 = 5;

    // Posicionando o Navio Horizontal na matriz
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaNavioH][colunaInicialH + i] = navioHorizontal[i];
    }

    // Posicionando o Navio Vertical na matriz
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialV + i][colunaNavioV] = navioVertical[i];
    }

    // Posicionando o Navio Diagonal1 na matriz
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialD1 + i][colunaNavioD1 + i] = navioDiagonal1[i];
        
    }

    // Posicionando o Navio Diagonal2 na matriz
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaInicialD2 + i][colunaNavioD2 + i] = navioDiagonal2[i];
        
    }

    // 3. Exibir o Tabuleiro com loops aninhados
    printf("=== TABULEIRO BATALHA NAVAL ===\n\n");
    for (int l = 0; l < 10; l++) {
        for (int c = 0; c < 10; c++) {
            printf("%d ", tabuleiro[l][c]); // Espaço separador para organização
        }
        printf("\n"); // Quebra de linha ao fim de cada fileira
    }

    return 0;
}
