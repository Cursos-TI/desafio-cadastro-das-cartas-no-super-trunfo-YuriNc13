#include <stdio.h>

int main(){

// variaveis da 1 cidade.
    char estado[50];
    char codigo[50];
    char cidade[49];
    int populacao;
    float area;
    float pib;
    int numero_pontos_turisticos;

// variaveis da 2 cidade.

    char estado_2[50];
    char codigo_2[50];
    char cidade_2[50];
    int populacao_2;
    float area_2;
    float pib_2;
    int numero_pontos_turisticos_2;

//definiçóes 1 cidade.

 printf("Digite o Estado: \n");
 scanf("%s", &estado);
 
 printf("Digite sua Codigo: \n");
 scanf("%s", &codigo);
 
 printf("Digite a cidade: \n");
 scanf("%s",&cidade);
 
 printf("Digite a população: \n");
 scanf("%d",&populacao);
 
 printf("Digite a Area: \n");
 scanf("%f", &area);
 
 printf("Digite o Pib: \n");
 scanf("%f",&pib);
 
 printf("Digite o numero de pontos turisticos: \n");
 scanf("%d",&numero_pontos_turisticos);

 


//definiçóes 2 cidade. 

 printf("Digite o Estado: \n");
 scanf("%s", &estado_2);

 printf("Digite sua Codigo: \n");
 scanf("%s", &codigo_2);

 printf("Digite a cidade: \n");
 scanf("%s",&cidade_2);

 printf("Digite a população: \n");
 scanf("%d",&populacao_2);

 printf("Digite a Area: \n");
 scanf("%f", &area_2);

 printf("Digite o Pib: \n");
 scanf("%f",&pib_2);

 printf("Digite o numero de pontos turisticos: \n");
 scanf("%d",&numero_pontos_turisticos_2);

//Exibição dos Dados da Carta 1.

 printf("Estado: %s\n", estado);
 printf("Cidade: %s \n", cidade);
 printf("Codigo: %s \n",codigo);
 printf("População: %d \n", populacao);
 printf("Pib: %f \n",pib);
 printf("Area: %f \n", area);

// Exibição dos Dados da Carta 2.

 printf("Estado: %s\n", estado_2);
 printf("Cidade: %s \n", cidade_2);
 printf("Codigo: %s \n",codigo_2);
 printf("População: %d \n", populacao_2);
 printf("Pib: %f \n",pib_2);
 printf("Area: %f \n", area_2);

 return 0;

}
