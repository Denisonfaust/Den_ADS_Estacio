#include <stdio.h>
 
int main() {
/*
Incremento (++)
Pré-Incremento ++a
Pós-Incremento a++
Decremento (--)
Pré-Decremento --a
Pós-Decremento a--
*/

// Variavel
int numero1 = 1, resultado;

// Incremento: Numero1 +1
printf("Antes incremento: %d\n", numero1);
numero1 ++;
printf("Após incremento: %d\n", numero1);

// Decremento: Numero1 -1
numero1 --;
printf("Após decremento: %d\n", numero1);

// Incremento

//Pós Incremento seria: Resultado = numero1++
resultado = numero1++;
printf("Após Pós-incremento - numero1: %d\n - Resultado: %d \n", numero1, resultado);

//Pré Incremento seria: Resultado = ++numero1
resultado = ++numero1;
printf("Após Pós-incremento - numero1: %d\n - Resultado: %d \n", numero1, resultado);

// Decremento

//Pós Decremento seria: Resultado = numero1--
resultado = numero1--;
printf("Após Pós-decremento - numero1: %d\n - Resultado: %d \n", numero1, resultado);

//Pré Decremento seria: Resultado = --numero1
resultado = --numero1;
printf("Após Pós-decremento - numero1: %d\n - Resultado: %d \n", numero1, resultado);


}

