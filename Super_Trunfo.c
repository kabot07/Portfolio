// PROGRAMAÇÃO JOGO SUPER TRUNFO - EM ANDAMENTO

#include <stdio.h>

int main () {
//CARTA1:
    int  pontosturisticos;
    char estado [50], codigocarta[50], cidade[50];
    float areakm, PIB, DenP, capita, superpoder;
    unsigned long int populacao;
    
    printf(" ****** SUPER TRUNFO ******\n");
    printf("\n"); 
    printf(" °°° Adicionar Carta 1 °°°\n");
    printf("\n"); 
    
    printf("Codigo da carta: \n");
    scanf("%s", &codigocarta);
    
    printf("Estado: \n");
    scanf("%s", &estado);

       printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%u", &populacao);

    printf("Area: \n");
    scanf("%f", &areakm);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos);

    DenP = (populacao / areakm );
    capita = (PIB / populacao);

    superpoder = populacao + areakm + PIB + capita + pontosturisticos - DenP;

    printf("\n"); 

    //CARTA2:

    int pontosturisticos2;
    char estado2 [50], codigocarta2[50], cidade2[50];
    float areakm2, PIB2, DenP2, capita2, superpoder2;
    unsigned long int populacao2;


    printf(" °°° Adicionar Carta 2 °°° \n");
    printf("\n"); 
   
    printf("Codigo da carta: \n");
    scanf("%s", &codigocarta2);
    
    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%u", &populacao2);

    printf("Area: \n");
    scanf("%f", &areakm2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos Turisticos: \n");
    scanf("%d", &pontosturisticos2);
   
    DenP2 = (populacao2 / areakm2 );
    capita2 = (PIB2 / populacao2);

    superpoder2 = populacao2 + areakm2 + PIB2 + capita2 + pontosturisticos2 - DenP2;


    printf("\n"); 
    printf(" ****** SUPER TRUNFO ******\n");
    printf("     Painel de Cartas:\n");
    printf("\n"); 
   
   
    //EXIBIR CARTA 1
    printf("°°° Carta 1 °°°\n");
    printf("\n"); 
    printf("Estado: %s \n", estado);
    printf("Codigo da Carta: %s \n", codigocarta);
    printf("Cidade: %s \n", cidade);
    printf("População: %u \n", populacao);
    printf("Area: %.2f km² \n", areakm);
    printf("PIB: %.2f reais\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f hab/km²\n", DenP);
    printf("PIB per Capita: %.2f reais\n", capita );
    printf ("Super Poder: %.2f \n", superpoder);

    //EXBIR CARTA 2
    printf("\n");
    printf("°°° Carta 2 °°° \n");
    printf("\n"); 
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %s \n", codigocarta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Area: %.2f km² \n", areakm2);
    printf("PIB: %.2f reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", DenP2);
    printf("PIB per Capita: %.2f reais\n", capita2 );
    printf ("Super Poder: %2.f \n", superpoder2);

    printf("\n");
    //COMPARAR CARTAS

    printf("°°° COMPARAÇÃO DAS CARTAS °°°\n");
    printf("carta A = 1      carta B = 0\n");
    
    
    printf(" População: Carta %d venceu\n", populacao > populacao2);
    printf(" Area: Carta %d venceu\n", areakm > areakm2);
    printf(" PIB: Carta %d venceu\n", PIB > PIB2);
    printf(" Pontos Turisticos: Carta %d venceu\n", pontosturisticos > pontosturisticos2);
    printf(" Densidade Populacional: Carta %d venceu\n", DenP < DenP2);
    printf(" PIB per Capita: Carta %d venceu\n", capita > capita2);
    printf(" Super Poder: Carta %d venceu\n", superpoder > superpoder2);



//Karol Botelho
return 0;
}
