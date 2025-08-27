#include <stdio.h>
 
int main() {
    int matriz[3][3]; // Declaração de uma matriz 3x3 de inteiros
 
    // Inicialização da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matriz[i][j] = i + j; /* Atribuindo valores à matriz: qdo i = 0 (faz todos do j): 0 + 0 = 0, 0 + 1 = 1 e 0 + 2 = 2
            qdo i = 1 (faz todos do j): 1 + 0 = 1, 1 + 1 = 2 e 1 + 2 = 3 e qdo i = 2 (faz todos do j): 2 + 0 = 2, 2 + 1 = 3 e 
            2 + 2 = 4 */
        }
    }
 
    // Exibindo os elementos da matriz usando estruturas de repetição for aninhadas
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);/* Imprime o indice de da matriz(i e j) "matriz[%d][%d] = %d\n"
            e o valor de matriz em cada indice - está buscando os valores nas variáveis i , j e matriz [i][j] */
        }
    }
 
    return 0;
}