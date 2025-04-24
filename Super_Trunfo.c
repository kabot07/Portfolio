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
    printf("Renda per Capita: %.2f reais\n", capita2 );
    printf ("Super Poder: %2.f \n", superpoder2);

    printf("\n");
   
    //Pela escolha do jogadores utilizando o menu, determinar qual carta ira vencer
    
    int escolhajogada;
    
    printf("°°° COMPETIÇÃO POR ATRIBUTO °°°\n");
    printf("\n");
    printf(" Escolha um atributo: \n");
    printf("1. Qual o nome dos países\n");
    printf("2. População\n");
    printf("3. Área\n");
    printf("4. PIB\n");
    printf("5. Pontos Turisticos\n");
    printf("6. Densidade Demográfica\n");
    printf("7. Renda Per Capita\n");
    printf("8. Super Poder\n");
    printf("Escolha: \n");
    scanf("%d", &escolhajogada);

    switch (escolhajogada)
    \\comparativo nome das cidades
    {
        case 1:
        printf("*'*'* NOMES DAS CIDADES *'*'*:\n");
        printf(" Carta 1: %s (%s)\n", cidade, estado);
        printf(" Carta 2: %s (%s)\n", cidade2, estado2);
        printf("    °°° %s - %s °°°\n", cidade, cidade2);
       
    break;
        
        case 2:
        printf("*'*'* A carta vencedora da rodada pelo atributo POPULAÇÃO *'*'*:\n");
    
    if (populacao > populacao2) {
        printf(" Carta 1: %s (%s): %u\n", cidade, estado, populacao);
        printf(" Carta 2: %s (%s): %u\n", cidade2, estado2, populacao2);
        printf("         °°° A carta 1 venceu!!!°°° \n ");
       
           
    } else if ((populacao < populacao2)) {
        printf(" Carta 1: %s (%s): %u\n", cidade, estado, populacao);
        printf(" Carta 2: %s (%s): %u\n", cidade2, estado2, populacao2);
        printf("         °°° A carta 2 venceu!!! °°° \n" );

    } else {
        printf(" Carta 1: %s (%s): %u\n", cidade, estado, populacao);
        printf(" Carta 2: %s (%s): %u\n", cidade2, estado2, populacao2);
        printf("                   ### EMPATE ###");
    }
    break;
        
        case 3:
        printf("*'*'* A carta vencedora da rodada pelo atributo ÁREA *'*'*:\n");
    
    if (areakm > areakm2) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, areakm);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, areakm2);
        printf("         °°° A carta 1 venceu!!!°°° \n");
       
           
    } else if ((areakm < areakm2)) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, areakm);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, areakm2);
        printf("         °°° A carta 2 venceu!!! °°° \n" );

    } else {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, areakm);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, areakm2);
        printf("                      ### EMPATE ###");
    }
    break;

        case 4:
    if (PIB > PIB2) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, PIB);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, PIB2);
        printf("         °°° A carta 1 venceu!!!°°° \n" );
           
               
    } else if ((PIB < PIB2)) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, PIB);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, PIB2);
        printf("         °°° A carta 2 venceu!!! °°° \n" );
    
    } else {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, PIB);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, PIB2);
        printf("                      ### EMPATE ###");
    }
    break;
    
        case 5:
        printf("*'*'* A carta vencedora da rodada pelo atributo PONTOS TURISTICOS *'*'*:\n");
    
    if (pontosturisticos > pontosturisticos2) {
        printf(" Carta 1: %s (%s): %d\n", cidade, estado, pontosturisticos);
        printf(" Carta 2: %s (%s): %d\n", cidade2, estado2, pontosturisticos2);
        printf("         °°° A carta 1 venceu!!!°°° \n");
       
           
    } else if ((pontosturisticos < pontosturisticos2)) {
        printf(" Carta 1: %s (%s): %d\n", cidade, estado, pontosturisticos);
        printf(" Carta 2: %s (%s): %d\n", cidade2, estado2, pontosturisticos2);
        printf("         °°° A carta 2 venceu!!! °°° \n" );

    } else {
        printf(" Carta 1: %s (%s): %d\n", cidade, estado, pontosturisticos);
        printf(" Carta 2: %s (%s): %d\n", cidade2, estado2, pontosturisticos2);
        printf("                      ### EMPATE ###");
    }
    break;
       
        case 6: 
        printf("*'*'* A carta vencedora da rodada pelo atributo DENSIDADE POPULACIONAL *'*'*:\n");
    
    if (DenP < DenP2) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, DenP);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, DenP2);
        printf("         °°° A carta 1 venceu!!!°°° \n" );
           
               
    } else if ((DenP > DenP2)) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, DenP);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, DenP2);
        printf("         °°° A carta 2 venceu!!! °°° \n" );
    
    } else {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, DenP);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, DenP2);
        printf("                      ### EMPATE ###");
    }
    break;
    
        case 7: 
        printf("*'*'* A carta vencedora da rodada pelo atributo RENDA PER CAPITA *'*'*:\n");
    
    if (capita > capita2) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, capita);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, capita2);
        printf("         °°° A carta 1 venceu!!!°°° \n" );
           
               
    } else if ((capita < capita2)) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, capita);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, capita2);
        printf("         °°° A carta 2 venceu!!! °°° \n" );
    
    } else {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, capita);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, capita2);
        printf("                      ### EMPATE ###");
    }
    break;
        
        case 8: 
        printf("*'*'* A carta vencedora da rodada pelo atributo SUPER PODER *'*'*:\n");
    
    if (superpoder > superpoder2) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, superpoder);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, superpoder2);
        printf("         °°° A carta 1 venceu!!!°°° \n" );
           
               
    } else if ((superpoder < superpoder2)) {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, superpoder);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, superpoder2);
        printf("        °°° A carta 2 venceu!!! °°° \n" );
    
    } else {
        printf(" Carta 1: %s (%s): %.2f\n", cidade, estado, superpoder);
        printf(" Carta 2: %s (%s): %.2f\n", cidade2, estado2, superpoder2);
        printf("                      ### EMPATE ###");
    }
    break;

    default:
        printf("Opção Inválida");
    break;
    }
    
    
    
    
    

//Karol Botelho
return 0;
}
