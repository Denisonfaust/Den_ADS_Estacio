#include <stdio.h>

int main() {

//Mover a torre 5 casas para direita

    for(int i = 0; i < 5; i++)
    {
        printf("Torre para Direita\n");//Imprime a direção do monimento
    }
    
    int b = 1;

    do{
        printf("Bispo para cima,diretia\n");
        b++;
        
    }while (b <= 5);

    int r = 1;

    while (r <= 8)
    {
        printf("Rainha para esquerda\n");
        r++;
    }

    return 0;
}