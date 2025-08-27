#include <stdio.h>

#define LINHAS 10
#define COLUNAS 10

int main() {

    int matriz [LINHAS][COLUNAS]; // Declaração de uma matriz com número de linhas e colunas definidos por constantes

    int soma = 0; // Variável para armazenar a soma dos elementos da matriz

    // Inicialização da matriz usando estruturas de repetição for aninhadas
   
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {

            soma++; // Incrementa a variável soma a cada iteração
            matriz[i][j] = soma; 
            printf(" %d ", matriz[i][j]); // Imprime o valor atribuído à matriz na posição [i][j])
        }
        printf("\n"); // Quebra de linha após cada linha da matriz

    }
    return 0;
}