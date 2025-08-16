#include <stdio.h>
 
int main() {

//Declaração da Variáveis

int nota1, nota2, nota3;
float media;

//Solicitação das Notas

printf("**Programa de Cálculo de Média**\n");
printf("Digite sua nota1: \n");
scanf("%d", &nota1);

printf("Digite sua nota2: \n");
scanf("%d", &nota2);

printf("Digite sua nota3: \n");
scanf("%d", &nota3);

media = (float)( nota1 + nota2 + nota3) / 3;

printf("A média é: %.1f", media);

return 0;


}

