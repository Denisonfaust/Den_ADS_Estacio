#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main() {
    
    int opcao;
    int numerosecreto, palpite;
    int regra;

    printf("Menu Principal\n");
    printf("1.Iniciar Jogo\n");
    printf("2.Ver Regras\n");
    printf("3.Sair do Jogo\n");
    printf("Digite sua Opção\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
            printf("Digite um número de 0 a 9:");
        scanf("%d", &palpite);
        if(numerosecreto == palpite)
        {
            printf("Voce acertou! \n");
        } else {
            printf("Voce errou! \n");
        }
        printf("Numero secreto: %d\n", numerosecreto);

        break;
    case 2: 
        printf("As regras são:\n");
        printf("1.Regra A\n");
        printf("2.Regra B\n");
        printf("3.Regra C\n");
        printf("Digite qual regra que ler: \n");
        scanf("%d", &regra);
        switch (regra)
        {
        case 1:
            printf("A regra 1 é: escolha um número!\n");
            break;
        case 2:
            printf("A regra 2 é: Digite esse número!\n");
            break;
        case 3:
            printf("A regra 3 é: Veja se acertou!\n");
            break;
        default:
            printf("Opção inválida");
            break;
        }
        break;
    case 3: 
        printf("Sair do Jogo\n");
        break;
    default:
        printf("Opção Inválida\n");
        break;
    }

}
