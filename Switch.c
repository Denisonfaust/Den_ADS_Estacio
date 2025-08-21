#include <stdio.h>
 
int main() {
    
    char variavel;

    printf("Digite um número: \n");
    scanf("%c", &variavel);

    switch (variavel)
    {
    case 'a':
        printf(" Código a ser executado se a variavel == a \n");
        break;
    case 'b':
        printf("Código a ser executado se a variavel == b \n");
    break;
    default:
        printf("Código a ser executado se a variavel não for a ou b \n");
        break;
    }

}