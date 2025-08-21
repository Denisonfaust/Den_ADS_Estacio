#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    
    int escolhaJogador, escolhaComputador;
    
    srand(time(0));

    printf("Jogo de Jokenpo!\n");
    printf("Escolha uma opção\n");
    printf("1.Pedra\n");
    printf("2.Papel\n");
    printf("3.Tesoura\n");
    printf("Escolha:\n");
    scanf("%d", &escolhaJogador);

    // O resto da divisão por 3 é igua a (0, 1 ou 2) então colocamos + 1 para os resultados serem = 1, 2, ou 3
    escolhaComputador = rand () % 3 + 1;

    switch (escolhaJogador)
    {
    case 1:
        printf("Jogador: Pedra - \n");
        break;
    case 2:
        printf("Jogador: Papel - \n");
        break;
    case 3:
        printf("Jogador: Tesoura - \n");
        break;
    default:
        printf("opção Inválida\n");
        break;
    }

    switch (escolhaComputador)
    {
    case 1:
        printf("Computador: Pedra - \n");
        break;
    case 2:
        printf("Computador: Papel - \n");
        break;
    case 3:
        printf("Computador: Tesoura - \n");
        break;
    }

    if(escolhaComputador == escolhaJogador)
    {     
        printf("### O Jogo empatou! ###\n");
    } else if ((escolhaJogador == 1) && (escolhaComputador == 3)||
              (escolhaJogador == 2) && (escolhaComputador == 1)||
              (escolhaJogador == 3) && (escolhaComputador == 2))
    {
        printf("### Parabéns você ganhou!###\n");
    } else{ 
        printf("### Você perdeu! ###\n");
    }
    {

    }

    }