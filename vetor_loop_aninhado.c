#include <stdio.h>
 
int main() {
    int vetor[5]; // Declaração de um vetor de 5 inteiros
 
    // Inicialização do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        vetor[i] = i * 2; /* Atribuindo valores ao vetor: Quando i = 0 faz, 0 * 2 = 0, quando i = 1 faz, 1 * 2 = 2,
        Quando i = 2 faz 2 * 2 = 4, quando i = 3 faz 3 * 2 = 6 , qdo i = 4 faz 4 * 2 = 8... depois para pq i = 5
        não é menor que 5 */
    }
 
    // Exibindo os elementos do vetor usando uma estrutura de repetição for
    for (int i = 0; i < 5; i++) {
        printf("vetor[%d] = %d\n", i, vetor[i]);/* Imprime o indice do Vetor ("vetor [%d] = %d e o valor do vetor",
         onde estão esses valores: nas variáveis i, vetor[i]*/
    }
 
    return 0;
}