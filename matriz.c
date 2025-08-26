#include <stdio.h>
 
int main() {

    // Declarando e inicializando uma matriz 3x3 - 1°[3]Colunas e 2°[3]Linhas
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
 
    // Acessando e imprimindo elementos específicos da matriz
    printf("O elemento na posição [0][0] é %d\n", matriz[0][0]);
    printf("O elemento na posição [1][1] é %d\n", matriz[1][2]);
    printf("O elemento na posição [2][2] é %d\n", matriz[2][1]);
 
    return 0;
}