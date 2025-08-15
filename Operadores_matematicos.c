#include <stdio.h>
 
int main() {
    
    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;
    
    // Carrega os valores do número 1:
    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);

    // Carrega os valores do número 2:
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);
    
    //Operação de Soma
    soma = numero1 + numero2;
    
    //Operação de Subritação
    subtracao = numero1 - numero2;
    
    //Operação de Multiplicação
    multiplicacao = numero1 * numero2;
    
    //Operação de Divisão
    divisao = numero1 / numero2;

    // Resultados das operações:
    printf("A soma é: %d \n", soma);
    printf("A subtração é: %d \n", subtracao);
    printf("A multiplicação é: %d \n", multiplicacao);
    printf("A divisão é: %d \n", divisao);

    return 0;

}

