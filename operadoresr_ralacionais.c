#include <stdio.h>

int main() {
    
// Declarar as variáveis de Produtos, estoque...

char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueminimoA = 500;
unsigned int estoqueminimoB = 2500;

double ValorTotalA;
double ValorTotalB;

int resultadoA;
int resultadoB;

// Exibir as informações dos Produtos...

printf("Produto: %s quantidade de estoque: %u seu valor unitário é; R$ %.2f \n", produtoA, estoqueA, valorA);
printf("Produto: %s quantidade de estoque: %u seu valor unitário é; R$ %.2f \n", produtoB, estoqueB, valorB);

// Comparações com o valor m´nimo de estoques...

resultadoA = estoqueA > estoqueminimoA;
resultadoB = estoqueB > estoqueminimoB;

printf("Produto: %s tem o estoque mínimo %d \n", produtoA, resultadoA);
printf("Produto: %s tem o estoque mínimo %d \n", produtoB, resultadoB);

// comparações entre os valores totais dos produtos...

printf("O valor total do produtoA: (R$ %.2f) é maior que o valor total do produto B: (R$ %.2f)? %d \n", 
estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));











    return 0;
}