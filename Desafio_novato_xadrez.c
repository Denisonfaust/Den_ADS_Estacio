#include <stdio.h>

int main() {

//Mover a Torre 5 casas para direita:

    for(int i = 0; i < 5; i++)
    {
        printf("Torre para Direita\n");//Imprime a direção do monimento
    }
        printf("\n");

    int b = 1;
    // Mover o Bispo 5 casas na Diagonal: 
    do{
        printf("Bispo para cima e diretia\n");//Imprime cima 5 vezes
        b++;
        
    }while (b <= 5);
        printf("\n");

    int r = 1;

// Mover a Rainha 8 casas para esquerda: 
    while (r <= 8)
    {
        printf("Rainha para esquerda\n");//Imprime esquerda 8 vezes
        r++;
    }
        printf("\n");
        
// Mover o Cavalo 2 casas para baixo e 1 a esquerda;
    int c;
    int movimentocavalo = 1;//flag para controlar o movimento em L:

    while (movimentocavalo--)
    {
        for(c = 0; c < 2; c++)
        {
            printf("Cavalo para Baixo\n");//Imprime Baixo 2 vezes
        }
        printf("Cavalo para Esquerda\n");//Impreme Esquerda 1 vez
    }
    
    return 0;
}