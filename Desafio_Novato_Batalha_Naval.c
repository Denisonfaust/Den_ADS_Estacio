#include <stdio.h>

int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
char coluna[10] = {'A', 'B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

int main() {
    int i, j;

    // Cabeçalho das colunas
    printf("   ");
    for(j = 0; j < 10; j++){
        printf(" %c ", coluna[j]);
    }
    printf("\n");

    // Impressão da matriz
    for(i = 0; i < 10; i++){
        printf("%2d ", linha[i]);  // Alinhamento correto
        for(j = 0; j < 10; j++){
            // Verifica E3, F3, G3
            if(i == 2 && (j == 4 || j == 5 || j == 6)){
                printf(" 3 ");
            }
            // Verifica H5, H6, H7
            else if(j == 7 && (i == 4 || i == 5 || i == 6)){
                printf(" 3 ");
            }
            else {
                printf(" 0 ");
            }
        }
        printf("\n");
    }

    return 0;
}