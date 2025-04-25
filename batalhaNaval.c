#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Preencher a matriz com 0
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {         //Matriz base
            tabuleiro[i][j] = 0;
        }
    }

    // Barco vertical: ocupa posições (2,5), (3,5), (4,5)
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][5] = 3;
    }
                                                               //Barcos verticais e horizontais
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
        for (int j = 0; j < 10; j++){       //Barcos diagonais
            if (contagem2 < 3){
                if (i + j == 9){
                    tabuleiro[i][j] = 3;
                contagem2++;}}
            else{
                break;
            }}}
                                                           //vvv loops aninhados com condições para definir os locais das habilidades vvv
    for (int i = 0; i < 10; i++){    //Cone
        for (int j = 0; j < 10; j++){
            if ((i == 3 && j == 2) || (i == 4 && j == 1) || (i == 4 && j == 2) || (i == 4 && j == 3) || (i == 5 && j == 0) || (i == 5 && j == 1) || (i == 5 && j == 2) || (i == 5 && j == 3) || (i == 5 && j == 4)){
                tabuleiro[i][j] = 1;}
            else{
                continue;
            }
            }}
    
    for (int i = 0; i < 10; i++){    //cruz
        for (int j = 0; j < 10; j++){
            if ((i == 7 && j == 6) || (i == 8 && j == 4) || (i == 8 && j == 5) || (i == 8 && j == 6) || (i == 8 && j == 7) || (i == 8 && j == 8) || (i == 9 && j == 6)){
                tabuleiro[i][j] = 1;}
            else{
                continue;}
        }}
    
        for (int i = 0; i < 10; i++){   //octaedro
            for (int j = 0; j < 10; j++){
                if ((i == 7 && j == 1) || (i == 8 && j == 0) || (i == 8 && j == 1) || (i == 8 && j == 2)|| (i == 9 && j == 1)){
                    tabuleiro[i][j] = 1;}
                else{
                    continue;}
            }}
                                                //^^^ Fim dos locais ^^^
    // Exibir o tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);   //Mostrar matriz na tela
        }
        printf("\n");
    }

    return 0;
}
