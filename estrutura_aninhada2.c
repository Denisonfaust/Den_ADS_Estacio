#include <stdio.h>
 
int main() {
    
    int idade;
    float renda;
    int dependentes;

// A primeira condição a idade do usuário está entre 18 e 65 anos.
// A segunda condição a renda do usuário é menor que 3000.
// A terceira condição verifica se o número de dependentes é maior que 2.

    printf("Digite sua idade: \n");
    scanf("%d", &idade);
    printf("Digete sua renda: \n");
    scanf("%f", &renda);
    printf("Digite o número de dependentes: \n");
    scanf("%d", &dependentes);

    if(idade >= 18 && idade < 60){
        if(renda < 3000){
           if(dependentes > 2)
        {
        printf("Você atende a todos os critérios! \n");
        } else{ 
        printf("Você não atende ao critério dependentes! \n");
        }
    } else{
        printf("Você não atende ao critério renda! \n");
    }
       
    } else {
        printf("Você não atende ao critério idade! \n");
    }
}
