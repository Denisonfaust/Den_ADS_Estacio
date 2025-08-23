#include <stdio.h>

//Exemplo de utilização de loop for com if 
int main() {
    for (int i = 1; i <= 20; i++) {
/* Nesta condição o programa vai listar somente os números ímpares, 
pq a condição é o resto da divisão de i é diferente de 0*, se o resto da divisão fosse = 0 
0, o programa listaria somente os números pares*/
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
   
    return 0;
}