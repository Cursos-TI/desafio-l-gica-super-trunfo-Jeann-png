#include <stdio.h>
int main(){

unsigned long int populacao1, populacao2; // "%lu"
int npt1, npt2; //npt= Número de Pontos Turísticos 
char estado1, estado2, codigo1[4], codigo2[4], cidade1[20], cidade2[20]; 
float area1, area2, pib1, pib2;
float dp1, dp2; //Densidade Populacional
float pibper1, pibper2; //PIB per Capita
float superpoder1, superpoder2;
int comparacaoPopulacao, comparacaoArea, comparacaoPib, comparacaoNpt, comparacaoDP, comparacaoPibper, comparacaoSuperpoder;

// Carta 1

    printf("Carta 1: \n");
    printf("Digite uma letra de 'A' a 'H'para o Estado: \n");
    scanf(" %c", &estado1); 
    printf("Digite o código da carta: \n");
    scanf("%s", codigo1);  
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade1);  
    printf("Digite a população da Cidade: \n");
    scanf("%lu", &populacao1);
    printf("Digite a área da Cidade: \n");
    scanf("%f", &area1); 
    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib1);  
    printf("Digete o número de pontos turísticos da Cidade: \n");
    scanf("%d", &npt1);
    dp1 = (float)populacao1 / area1;
    pibper1 = (pib1 * 1000000000.0f) / populacao1;
    superpoder1 = (1/dp1) + populacao1 + area1 + pib1 + npt1 + pibper1;

// Resultado da carta 1

    printf("\nCarta 1 \n");
    printf("Estado: %c \n", estado1); 
    printf("Código: %c%s \n",estado1, codigo1); 
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %lu \n", populacao1);
    printf("Área: %.2f Km² \n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", npt1);
    printf("Densidade Populacional: %.2f \n", dp1);
    printf("PIB per Capita: %.2f \n", pibper1);
    printf("Super Poder: %.2f \n", superpoder1);

// Carta 2

    printf("\nCarta 2: \n");
    printf("Digite uma letra de 'A' a 'H'para o Estado: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s", cidade2);
    printf("Digite a população da Cidade: \n");
    scanf("%lu", &populacao2);
    printf("Digite a área da Cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da Cidade: \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da Cidade: \n");
    scanf("%d", &npt2);
    dp2 = (float)populacao2 / area2;
    pibper2 = (pib2 * 1000000000.0f) / populacao2;
    superpoder2 = (1/dp2) + populacao2 + area2 + pib2 + npt2 + pibper2;
    
// Resultado da carta 2

    printf("\nCarta 2 \n");
    printf("Estado: %c \n", estado2); 
    printf("Código: %c%s \n", estado2, codigo2); 
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %.2f Km² \n", area2);
    printf ("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", npt2);
    printf("Densidade Populacional: %.2f \n", dp2);
    printf("PIB per Capita: %.2f \n", pibper2);
    printf("Super Poder: %.2f \n", superpoder2);


    // Comparação das cartas
//Comparação de população
printf("\nComparação entre Populaçao. \n");
if(populacao1 > populacao2){
    printf("A cidade vencedora é: %s \n", cidade1);
}else{
    printf("A cidade vencedora é: %s \n", cidade2);
}
 
return 0;
}