#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Preencher a matriz com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Barco vertical: ocupa posições (2,5), (3,5), (4,5)
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][5] = 3;
    }

    // Barco horizontal: ocupa posições (6,1), (6,2), (6,3)
    for (int j = 1; j < 4; j++) {
        tabuleiro[6][j] = 3;
    }

    int contagem = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (contagem < 3){
                if (i == j){
                    tabuleiro[i][j] = 3;
                    contagem++;}
            }else{
                break;
            }}}

    int contagem2 = 0;
    for (int i = 0; i < 10; i++){
        for (int j = 0; j < 10; j++){
            if (contagem2 < 3){
                if (i + j == 9){
                    tabuleiro[i][j] = 3;
                contagem2++;}}
            else{
                break;
            }}}

    // Exibir o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



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
