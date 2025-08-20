#include <stdio.h>
 
int main() {
    
    int idade;
    float renda;

/* Programa para verificar se uma pessoal está qualificada para receber
um desconto especial baseado na idade e renda mensal. A pessoal deve ter mais
de 60 anos ou menos de 18 e deve ter uma renda mensal menor que 2000*/

printf("Digite sua idade: \n");
scanf("%d", &idade);
printf("Digete sua renda: \n");
scanf("%f", &renda);

    if(idade< 18 || idade >60) {  
       if(renda < 2000)
    {
    printf("Você tem direito ao desconto! \n");
    }  else{
    printf("Você não tem direito ao desconto devido a sua renda! \n");
    }

    } else {
    printf("Você não atende aos critérios devido a sua idade! \n");
    }
}