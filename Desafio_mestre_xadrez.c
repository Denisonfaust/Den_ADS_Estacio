#include <stdio.h>

//Mover a Torre 5 casas para direita com recursividade:

    void moveTorre(int casas){
        if(casas > 0){
            printf("Torre para direita\n");
            moveTorre(casas - 1);
            
        }
    }
    // Mover o Bispo 5 casas na Diagonal: 

    void moveBispo(int casasb){
        if(casasb > 0){
            printf("Bispo para cima e direita\n");
            moveBispo(casasb - 1);
        }
    }
    
// Mover a Rainha 8 casas para esquerda: 
    void moveRainha(int casasr){
        if(casasr > 0){
            printf("Rainha para esquerda\n");
            moveRainha(casasr - 1);
        }
    }
    int main() {
        moveTorre(5);
        printf("\n");
        moveBispo(5);
        printf("\n");
        moveRainha(8);
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