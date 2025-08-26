#include <stdio.h>
 
int main() {

int index;

//Declarando e inicializando uma matriz 3x3 - 1°[3]Linhas e 2°[3]Colunas
char *Alunos[3][3] = {
    {"Aluno 0", "Pt: 30", "Mat: 90"},
    {"Aluno 1", "Pt: 60", "Mat: 70"},
    {"Aluno 2", "Pt: 80", "Mat: 50"}
 };

//Me orientendo o que o usuário tem que faver:
printf("Digite o número do aluno para ver suas notas: \n");
printf("Para o Aluno 0, digite: 0 \n");
printf("Para o Aluno 1, digite: 1 \n");
printf("Para o Aluno 2, digite: 2 \n");
scanf("%d", &index);

//Mostrando as notas do aluno escolhido, usando os indices da matriz:
printf("As notas do %s são: %s e %s \n", Alunos[index][0], Alunos[index][1], Alunos[index][2]);

return 0;


}