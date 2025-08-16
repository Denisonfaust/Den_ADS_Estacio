#include <stdio.h>

int main() {
    
// Declarando das variáveis da carta1
    char estado1[50];
    char codigo1[3];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidade1;
    float pibpercapita1;
    float superPoder1;

// Coletando as informações da carta1
    printf("Digite o Estado1: \n");
    scanf("%s", &estado1);
    printf("Digite o codigo1: \n");
    scanf("%s", &codigo1);
    printf("Digite a cidade1: \n");
    scanf("%s", &cidade1);
    printf("Digite a populacao1: \n");
    scanf("%u", &populacao1);
    printf("Digite a area1: \n");
    scanf("%f", &area1);
    printf("Digite o pib1: \n");
    scanf("%f", &pib1);
    printf("Digite os pontos turísticos1: \n");
    scanf(" %d", &turismo1);


// Calculando a densidade, Pib percapita e Super poder;

    densidade1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + (float)turismo1 + pibpercapita1 - densidade1;


// Imprimindo as informações da carta1
    printf("Estado1: %s \n", estado1);
    printf("Codigo1: %s \n", codigo1);
    printf("Cidade1: %s \n", cidade1);
    printf("População1: %u\n", populacao1);
    printf("Área1: %.2f Km²\n", area1);
    printf("Pib1: %.2f Bilhôes\n", pib1);
    printf("Pontos turisticos1: %d \n", turismo1);
    printf("Densidade Populacional1: %.2f \n", densidade1);
    printf("Pib per Capita1: %.2f \n", pibpercapita1);
    printf("Super Poder1: %.2f \n", superPoder1 );

// Declarando das variáveis da carta2
    char estado2[50];
    char codigo2[3];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidade2;
    float pibpercapita2;
    float superPoder2;
    

// Coletando as informações da carta2
    printf("Digite o Estado2: \n");
    scanf("%s", &estado2);
    printf("Digite o codigo2: \n");
    scanf("%s", &codigo2);
    printf("Digite a cidade2: \n");
    scanf("%s", &cidade2);
    printf("Digite a populacao2: \n");
    scanf("%f", &populacao2);
    printf("Digite a area2: \n");
    scanf("%f", &area2);
    printf("Digite o pib2: \n");
    scanf("%f", &pib2);
    printf("Digite os pontos turísticos1: \n");
    scanf(" %d", &turismo2);

// Calculando a densidade, Pib percapita e Super poder;

    densidade2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + (float)turismo2 + pibpercapita2 - densidade2;
    

// Imprimindo as informações da carta2
    printf("Estado2: %s \n", estado2);
    printf("Codigo2: %s \n", codigo2);
    printf("Cidade2: %s \n", cidade2);
    printf("População2: %u\n", populacao2);
    printf("Área2: %.2f \n", area2);
    printf("Pib2: %.2f \n", pib2);
    printf("Pontos turisticos2: %d \n", turismo2);
    printf("Densidade Populacional2: %.2f \n", densidade2);
    printf("Pib per Capita2: %.2f \n", pibpercapita2);

//Comparação das cartas variaveis

    float resultadoPopulacao;
    float resultadoArea;
    float resultadoPib;
    int resultadoTurismo;
    float resultadoDensidade;
    float resultadoPibpercapita;
    float resultadoSuperpoder;

//Comparação das cartas variaveis
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoTurismo = turismo1 > turismo2;
    resultadoDensidade = densidade1 < densidade2;
    resultadoPibpercapita = pibpercapita1 > pibpercapita2;
    resultadoSuperpoder = superPoder1 > superPoder2;

// Exibindo os resultados das comparações das cartas:  
    printf("Comparação da Cartas: \n");
    printf("População: Carta 1: %d\n", resultadoPopulacao);
    printf("Área: Carta 1: %d\n", resultadoArea);
    printf("Pib: Carta 1: %d\n", resultadoPib);
    printf("Turismo: Carta 1: %d\n", resultadoTurismo);
    printf("Densidade: Carta 1: %d\n", resultadoDensidade);
    printf("Pibpercapita: Carta 1: %d\n", resultadoPibpercapita);
    printf("SuperPoder: Carta 1: %d\n", resultadoSuperpoder);


    return 0;
}