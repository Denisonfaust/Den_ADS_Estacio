#include <stdio.h>
 
int main() {
    
    int dia;

    printf("Digite o dia: \n");
    scanf("%d", &dia);

    if(dia == 1){
        printf("Domingo\n");
    } else if(dia == 2)
    {
        printf("segunda feira\n");
    } else if(dia == 3)
    {
        printf("Terça feira\n");
    } else if(dia == 4)
    {
        printf("Quarta feira\n");
    }else if(dia == 5)
    {
        printf("Quinta feira\n");
    }else if(dia == 6)
    {
        printf("Sexta feira\n");
    }else {
        printf("Sábado\n");
    }

    switch (dia)
    {
    case 1:
        printf("Domingo_s\n");
        break;
    case 2:
        printf("Segunda feira_s\n");
        break;
    case 3:
        printf("Terça feira_s\n");
        break;
    case 4:
        printf("Quarta feira_s\n");
        break;
    case 5:
        printf("Quinta feira_s\n");
        break;
    case 6:
        printf("Sexta feira_s\n");
        break;
    case 7:
        printf("Sábado_s\n");
        break;
    default:
        printf("Dia inválio_s");
        }

    return 0;

}