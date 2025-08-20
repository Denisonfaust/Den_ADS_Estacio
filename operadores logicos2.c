#include <stdio.h>

int main() {
  float temperatura = 15.0;
  float umidade = 55.0;

//Temperatura >= 20 - Falso
//Temperatura <= 30 - Verdadeiro
//Falso && Verdadeiro = falso
//Umidade > 50 = Verdadeiro
//Falso && Verdadeiro = Falso

  if (temperatura >= 20.0 && temperatura <= 30.0 && umidade > 50.0) {
    printf("As condições estão favoráveis\n");
  } else {
    printf("As condições não estão favoráveis\n");
  }

  return 0;
}