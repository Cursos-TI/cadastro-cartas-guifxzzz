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
unsigned long int Populacao1;
unsigned long int Populacao2;
float Area1;
float Area2;
float Pib1;
float Pib2;
int PontosTuristicos1;
int PontosTuristicos2;
float Densidadepopulacional1;
float Densidadepopulacional2;
float Pibpercapita1;
float Pibpercapita2;
float SuperPoder1;
float SuperPoder2;

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
scanf("%lu", &Populacao1);

printf("Digite sua area: \n");
scanf("%f", &Area1);

printf("Digite seu PIB: \n");
scanf("%f", &Pib1);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &PontosTuristicos1);

// As contas sempre vão depois que extraímos todos os valores que precisamos. Então depois do último scanf pode entrar contas caso o código precise.

// área de contas

Densidadepopulacional1 = (float) Populacao1 / Area1;
Pibpercapita1 = (float) Pib1 / Populacao1;
SuperPoder1 = Populacao1 + Area1 + Pib1 + PontosTuristicos1 + 1.0 / Densidadepopulacional1 + Pibpercapita1;

//Carta 2
printf("\nCarta 2\n");
printf("Digite seu estado: \n");
scanf("%s", Estado2);

printf("Digite seu codigo: \n");
scanf("%s", Codigo2);

printf("Digite sua cidade: \n");
scanf("%s", Cidade2);

printf("Digite sua populacao: \n");
scanf("%lu", &Populacao2);

printf("Digite sua area: \n");
scanf("%f", &Area2);

printf("Digite seu PIB: \n");
scanf("%f", &Pib2);

printf("Digite a quantidade de pontos turisticos: \n");
scanf("%d", &PontosTuristicos2);

/*As contas sempre vão depois que extraímos todos os valores que precisamos. 
Então depois do último scanf pode entrar contas caso o código precise.*/

// área de contas

Densidadepopulacional2 = (float) Populacao2 / Area2;
Pibpercapita2 = (float) Pib2 / Populacao2;
SuperPoder2 = Populacao2 + Area2 + Pib2 + PontosTuristicos2 + 1.0 / Densidadepopulacional2 + Pibpercapita2;

// Área para exibição dos dados

//carta 1
printf("\nCarta 1\n");
printf("Estado: %s\n", Estado1);
printf("Código: %s\n", Codigo1);
printf("Cidade: %s\n", Cidade1);
printf("População: %lu\n", Populacao1);
printf("Área: %.2f\n", Area1);
printf("PIB: %.2f\n", Pib1);
printf("Pontos turisticos: %d\n", PontosTuristicos1);
printf("Densidade Populacional: %f\n", Densidadepopulacional1);
printf("PIB per Capita: %.2f\n", Pibpercapita1);
printf("Super Poder: %.2f\n", SuperPoder1);

//carta 2
printf("\nCarta 2\n");
printf("Estado: %s\n", Estado2);
printf("Código: %s\n", Codigo2);
printf("Cidade: %s\n", Cidade2);
printf("População: %lu\n", Populacao2);
printf("Área: %.2f\n", Area2);
printf("PIB: %.2f\n", Pib2);
printf("Pontos turisticos: %d\n", PontosTuristicos2);
printf("Densidade Populacional: %f\n", Densidadepopulacional2);
printf("PIB per Capita: %.2f\n", Pibpercapita2);
printf("Super Poder: %.2f\n", SuperPoder2);

// Área de comparação de cartas

printf("\nComparações cartas\n");

if (Populacao1 > Populacao2) {
printf("População: Carta 1 Venceu\n");
} else {
printf("População: Carta 2 Venceu\n");
}

if (Area1 > Area2) {
printf("Área: Carta 1 Venceu\n");
} else {
printf("Área: Carta 2 Venceu\n");
}

if (Pib1 > Pib2) {
printf("PIB: Carta 1 Venceu\n"); 
} else {
printf("PIB: Carta 2 Venceu\n");
}

if (PontosTuristicos1 > PontosTuristicos2) {
printf("Ponto Turisticos: Carta 1 Venceu\n"); 
} else {
printf("Ponto Turisticos: Carta 2 Venceu\n");
}

if (Densidadepopulacional1 > Densidadepopulacional2) {
printf("Densidade Populacional: Carta 1 Venceu\n"); 
} else {
printf("Densidade Populacional: Carta 2 Venceu\n");
}

if (Pibpercapita1 > Pibpercapita2) {
printf("PIB per capita: Carta 1 Venceu\n"); 
} else {
printf("PIB per capita: Carta 2 Venceu\n");
}

if (SuperPoder1 > SuperPoder2) {
printf("Super Poder: Carta 1 Venceu\n"); 
} else {
printf("Super Poder: Carta 2 Venceu\n");
}

printf("\nCarta Vencedora:\n");

if (SuperPoder1 > SuperPoder2) {
printf("Carta 1 é a vencedora. \n");
} else {
printf("Carta 2 é a vencedora. \n");
}

/*printf("\nPopulação: Carta 1 é maior que a carta 2? - %d\n", Populacao1 > Populacao2);
printf("Área: Carta 1 é maior que a carta 2? - %d\n", Area1 > Area2);
printf("PIB: Carta 1 é maior que a carta 2? - %d\n", Pib1 > Pib2);
printf("Pontos Turisticos:  Carta 1 é maior que a carta 2? - %d\n", PontosTuristicos1 > PontosTuristicos2);
printf("Densidade Populacinal: Carta 1 é maior que a carta 2? - %d\n", Densidadepopulacional1 < Densidadepopulacional2);
printf("PIB per Capita: Carta 1 é maior que a carta 2? - %d\n", Pibpercapita1 > Pibpercapita2);
printf("Super Poder: Carta 1 é maior que a carta 2? - %d\n", SuperPoder1 > SuperPoder2);

printf("\n0 - Não | 1 - Sim");


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
}
