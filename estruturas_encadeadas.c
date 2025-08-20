#include <stdio.h>
 
int main() {
    
    int idade;

    printf("Digete sua idade: \n");
    scanf("%d", &idade);

// criança <= 12
// Adolescente 12 >= x < 18
// Aldulto 18 >= x < 60
// Idoso > 60

    if(idade > 60) {
        printf("Você é um idoso! \n");
    } else if(idade >= 18 && idade < 60) {
        printf("Você é um adulto! \n");
    } else if(idade >= 12 && idade < 18){
        printf("Você é um adolescente! \n");
    } else{
        printf("Você é uma criança! \n");
    }


    return 0;

}
