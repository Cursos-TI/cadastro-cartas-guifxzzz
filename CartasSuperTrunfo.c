#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main (){
// Área para definição das variáveis para armazenar as propriedades das cidades

char Estado1[20];
char Estado2[20];
char Codigo1[20];
char Codigo2[20];
char Cidade1[20];
char Cidade2[20];
int Populacao1;
int Populacao2;
float Area1;
float Area2;
float Pib1;
float Pib2;
int PontosTuristicos1;
int PontosTuristicos2;

// Área para entrada de dados

//Carta 1
printf("\nCarta 1\n");
printf("Digite seu estado: \n");
scanf("%s", Estado1);

printf("Digite seu codigo: \n");
scanf("%s", Codigo1);

printf("Digite sua cidade: \n");
scanf("%s", Cidade1);

// Sempre usar & 
printf("Digite sua populacao: \n");
scanf("%d", &Populacao1);

printf("Digite sua area: \n");
scanf("%f", &Area1);

printf("Digite seu PIB: \n");
scanf("%f", &Pib1);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &PontosTuristicos1);

//Carta 2
printf("\nCarta 2\n");
printf("Digite seu estado: \n");
scanf("%s", Estado2);

printf("Digite seu codigo: \n");
scanf("%s", Codigo2);

printf("Digite sua cidade: \n");
scanf("%s", Cidade2);

printf("Digite sua populacao: \n");
scanf("%d", &Populacao2);

printf("Digite sua area: \n");
scanf("%f", &Area2);

printf("Digite seu PIB: \n");
scanf("%f", &Pib2);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &PontosTuristicos2);

// Área para exibição dos dados da cidade

//carta 1
printf("\n Carta 1\n");
printf("Estado: %s\n", Estado1);
printf("Código: %s\n", Codigo1);
printf("Cidade: %s\n", Cidade1);
printf("População: %d\n", Populacao1);
printf("Área: %f\n", Area1);
printf("PIB: %f\n", Pib1);
printf("Pontos turisticos: %d\n", PontosTuristicos1);

//carta 2
printf("\n Carta 2\n");
printf("Estado: %s\n", Estado2);
printf("Código: %s\n", Codigo2);
printf("Cidade: %s\n", Cidade2);
printf("População: %d\n", Populacao2);
printf("Área: %f\n", Area2);
printf("PIB: %f\n", Pib2);
printf("Pontos turisticos: %d\n", PontosTuristicos2);

  /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel 2, variavel 3)
    
    %d: Imprime um inteiro no formato decimal
    %i: Equivalente a %d
    %f: Imprime um número de ponto flutuante no formato padrão
    %e: Imprime um número de ponto flutuante no formato científica
    %c: Imprime um único caractere
    %s: Imprime uma cadeia (string) de caracteres
    \n: Serve para pular linha
    .+(numero de casa decimal)f = .2f

    */

    return 0;
}
