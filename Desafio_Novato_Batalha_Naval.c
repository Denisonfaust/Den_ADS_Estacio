#include <stdio.h>

int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
char coluna[10] = {'A', 'B','C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

int main() {
    
    int i, j;
    
    //Imprimindo o cabeçalho da linha
    printf("  ");
    for(j = 0; j < 10; j++){
        printf(" %c ", coluna[j]);
    }
    printf("\n");

    //Imprimindo a matriz com as linhas e colunas
    for(i = 0; i < 10; i++){
        printf("%d ", linha[i]);
        for(j = 0; j < 10; j++){
            printf(" 0 ");//Imprimindo o valor 0 em cada posição da matriz
        }
        printf("\n");
    }
    return 0;
       
}