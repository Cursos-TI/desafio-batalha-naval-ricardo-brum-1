#include <stdio.h>

// Desafio Batalha Naval - MateCheck

int main() {
    // Nível Novato - Posicionamento dos Navios

    int tabuleiro[10][10];
    char coluna[10] = {'A','B','C','D','E','F','G','H','I','J'};
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // for exclusivo para a impressão da primeira linha com as letras de A até J
    for(int c = 0; c < 10; c++){
        if(c == 0){
            printf("%5c", coluna[c]);
        } else{
            printf("%3c", coluna[c]);
        }
        
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%2d  ", linha[i]);//imprimindo as linhas de 1 a 10 alinhado na segunda casa decimal

        for(int j = 0; j < 10; j++){

            if(i == 1 && j >= 2 && j <=4){ // posição do navio 1 horizontal(C2/D2/E2)
                tabuleiro[i][j] = 3;
            } else if(j == 7 && i >= 6 && i <= 8){ // posição do navio 2 vertical(H7/H8/H9)
                tabuleiro[i][j] = 3;
            } else if(i == j && i >= 3 && i <= 5){   // posição do navio 3 diagonal(D4/E5/F6)
                tabuleiro[i][j] = 3;
            } else if(i + j == 9 && i >= 6 && i <= 8){   // posição do navio 4 diagonal(D7/C8/B9)
                tabuleiro[i][j] = 3;
            } else if(j - i == 5 && i >= 1 && i <= 3){ // posição do navio 5 diagonal(G2/H3/I4)
                tabuleiro[i][j] = 3;
            } else{ // deu água
                tabuleiro[i][j] = 0;
            }          
            printf("%d  ",tabuleiro[i][j]); // impressão do tabuleiro com todas as posições
        }
        printf("\n");
    }



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
