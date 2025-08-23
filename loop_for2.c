#include <stdio.h>

//Exemplo de utilização de loop for com if 
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            printf("%d\n", i);
        }
    }
   
    return 0;
}