#include <stdio.h>
#include <string.h>



int main () {


//ADICIONAR CARTAS

//CARTA1:
    int  pontosturisticos, codigocarta;
    char estado [50], cidade [50];
    float areakm, PIB, demo, capita, superpoder;
    unsigned long int populacao;
    
    printf(" ****** SUPER TRUNFO ******\n");
    printf("\n"); 
    printf(" °°° Adicionar Carta 1 °°°\n");
    printf("\n"); 
    
    printf("Codigo da carta: \n");
    scanf("%d", &codigocarta);
    
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

    demo = (populacao / areakm ); // densidade é valor para subtrair dos pontos
    capita = (PIB / populacao);

    superpoder = populacao + areakm + PIB + capita + pontosturisticos - demo;

    printf("\n"); 

    //CARTA2:

    int pontosturisticos2, codigocarta2;
    char estado2 [50], cidade2 [50];
    float areakm2, PIB2 , demo2, capita2, superpoder2;
    unsigned long int populacao2;

    printf(" ****** SUPER TRUNFO ******\n");
    printf("\n");
    printf(" °°° Adicionar Carta 2 °°° \n");
    printf("\n"); 
   
    printf("Codigo da carta: \n");
    scanf("%d", &codigocarta2);
    
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
   
    demo2 = (populacao2 / areakm2 ); // densidade é valor para subtrair dos pontos
    capita2 = (PIB2 / populacao2);

    superpoder2 = populacao2 + areakm2 + PIB2 + capita2 + pontosturisticos2 - demo2;


    printf("\n"); 
    printf(" ****** SUPER TRUNFO ******\n");
    printf("     Painel de Cartas:\n");
    printf("\n"); 
   
   
    //EXIBIR CARTA 1
    printf("°°° Carta 1 °°°\n");
    printf("\n"); 
    printf("Estado: %s \n", estado);
    printf("Codigo da Carta: %d \n", codigocarta);
    printf("Cidade: %s \n", cidade);
    printf("População: %u \n", populacao);
    printf("Area: %.2f km² \n", areakm);
    printf("PIB: %.2f reais\n", PIB);
    printf("Pontos Turisticos: %d\n", pontosturisticos);
    printf("Densidade populacional: %.2f hab/km²\n", demo);
    printf("PIB per Capita: %.2f reais\n", capita );
    printf ("Super Poder: %.2f \n", superpoder);

    //EXBIR CARTA 2
    printf("\n");
    printf("°°° Carta 2 °°° \n");
    printf("\n"); 
    printf("Estado: %s \n", estado2);
    printf("Codigo da Carta: %d \n", codigocarta2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %u\n", populacao2);
    printf("Area: %.2f km² \n", areakm2);
    printf("PIB: %.2f reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", demo2);
    printf("Renda per Capita: %.2f reais\n", capita2 );
    printf ("Super Poder: %.2f \n", superpoder2);

    printf("\n");
    
//  =========================================================================================
    //Pela escolha do jogadores utilizando o menu, determinar qual carta ira vencer
    
    int escolhajogada, escolhajogada2;
    float carta1atributo1 = 0, carta1atributo2 = 0;
    float carta2atributo1 = 0, carta2atributo2 = 0;
    int carta;
    char nomeatributo1[50], nomeatributo2[50]; //armazenar o nome do atributo para exibir no painel final
    


    printf("   ****** SUPER TRUNFO ******\n");
    printf("°°° COMPETIÇÃO POR ATRIBUTOS °°°\n");
    printf("\n");
    printf("            RODADA 1  \n");
    printf(" Escolha o primeiro atributo: \n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Renda Per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: ");
    scanf("%d", &escolhajogada);

    // Logica de atributos JOGADA 1 e FINAL
    switch (escolhajogada) {
        case 1:
            strcpy(nomeatributo1, "População"); //armazenar para exibir no painel final

            printf("*'*'* Primeiro Atributo: POPULAÇÃO *'*'*:\n");
            carta1atributo1 = populacao;  //logica para somar a rodada 1 com final 
            carta2atributo1 = populacao2; //logica para somar a rodada 2 com final
            populacao > populacao2 ? (carta = codigocarta) : (carta = codigocarta2); //logica para definir o vencedor por jogada
            printf ("A carta vencedora da rodada 1 é: Carta %d\n", carta); 
        break;
        
        case 2:
            strcpy(nomeatributo1, "Aréa");

            printf("*'*'* Primeiro Atributo:  ÁREA *'*'*:\n");
            carta1atributo1 = areakm;
            carta2atributo1 = areakm2; 
            areakm > areakm2 ? (carta = codigocarta) : (carta = codigocarta2);
            printf ("A carta vencedora da rodada é: Carta %d\n", carta);
        break;
        
        case 3: 
            strcpy(nomeatributo1, "PIB");

            printf("*'*'* Primeiro Atributo:  PIB *'*'*:\n");
            carta1atributo1 = PIB;
            carta2atributo1 = PIB2; 
            PIB > PIB2 ? (carta = codigocarta) : (carta = codigocarta2);
            printf ("A carta vencedora da rodada é: Carta %d\n", carta);
        break;
        
        case 4: 
            strcpy(nomeatributo1, "Pontos Turisticos");

            printf("*'*'* Primeiro Atributo:  PONTOS TURISTICOS *'*'*:\n");
            carta1atributo1 = pontosturisticos;
            carta2atributo1 = pontosturisticos2; 
            pontosturisticos > pontosturisticos2 ? (carta = codigocarta) : (carta = codigocarta2);
            printf ("A carta vencedora da rodada é: Carta %d\n", carta);
        break;
       
        case 5: 
            strcpy(nomeatributo1, "Densidade Populacional");

            printf("*'*'* Primeiro Atributo:  DENSIDADE POPULACIONAL *'*'*:\n");
            carta1atributo1 = demo; 
            carta2atributo1 = demo2;
            demo < demo2 ? (carta = codigocarta) : (carta = codigocarta2); // menor densidade ganha
            printf ("A carta vencedora da rodada é: Carta %d\n", carta);
        break;
        
        case 6:
            strcpy(nomeatributo1, "Renda Per Capita");

            printf("*'*'* Primeiro Atributo:  RENDA PER CAPITA *'*'*:\n");
            carta1atributo1 = capita;
            carta2atributo1 = capita2; 
            capita > capita2 ? (carta = codigocarta) : (carta = codigocarta2);
            printf ("A carta vencedora da rodada é: Carta %d\n", carta);
        break;
        
        case 7: 
            strcpy(nomeatributo1, "Super Poder");

            printf("*'*'* Primeiro Atributo:  SUPER PODER *'*'*:\n");
            carta1atributo1 = superpoder;
            carta2atributo1 = superpoder2; 
            superpoder > superpoder2 ? (carta = codigocarta) : (carta = codigocarta2);
            printf ("A carta vencedora da rodada é: Carta %d\n", carta);
        break;
       
        default:
            printf("Atributo 1 inválido.\n"); 
        return 1;
        break;
    }
    printf("\n");
    
    // segundo menu
    printf("    ****** SUPER TRUNFO ******\n");
    printf("°°° COMPETIÇÃO POR ATRIBUTOS °°°\n");
    printf("\n");
    printf("             RODADA 2  \n");
    printf("  Escolha o segundo atributo: \n");
    printf("obs: escolha um atributo diferente da primeira rodada. ");
    printf("\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. Renda Per Capita\n");
    printf("7. Super Poder\n");
    printf("Escolha: "); 
    scanf("%d", &escolhajogada2);
    

    if (escolhajogada == escolhajogada2) {  //conferir se a escolha dos atributos são iguais

        printf("Você escolheu o mesmo atributo! Reinicie e escolha atributos diferentes!\n");
    
    } else {

        // Logica de atributos JOGADA 2 e FINAL
        switch (escolhajogada2) {
            case 1:
                strcpy(nomeatributo2, "População"); //armazenar para exibir no painel final

                printf("*'*'* Segundo Atributo: POPULAÇÃO *'*'*:\n");
                carta1atributo2 = populacao;  //logica para armazenar a rodada com final 
                carta2atributo2 = populacao2; //logica para armazenar a rodada com final
                populacao > populacao2 ? (carta = codigocarta) : (carta = codigocarta2); //logica para definir o vencedor por jogada
                printf ("A carta vencedora da rodada 1 é: Carta %d\n", carta); 
            break;
            
            case 2:
                strcpy(nomeatributo2, "Aréa");

                printf("*'*'* Segundo Atributo:  ÁREA *'*'*:\n");
                carta1atributo2 = areakm;
                carta2atributo2 = areakm2; 
                areakm > areakm2 ? (carta = codigocarta) : (carta = codigocarta2);
                printf ("A carta vencedora da rodada é: Carta %d\n", carta);
            break;
            
            case 3: 
                strcpy(nomeatributo2, "PIB");

                printf("*'*'* Segundo Atributo:  PIB *'*'*:\n");
                carta1atributo2 = PIB;
                carta2atributo2 = PIB2; 
                PIB > PIB2 ? (carta = codigocarta) : (carta = codigocarta2);
                printf ("A carta vencedora da rodada é: Carta %d\n", carta);
            break;
            
            case 4: 
                strcpy(nomeatributo2, "Pontos Turisticos");

                printf("*'*'* Segundo Atributo:  PONTOS TURISTICOS *'*'*:\n");
                carta1atributo2 = pontosturisticos;
                carta2atributo2 = pontosturisticos2; 
                pontosturisticos > pontosturisticos2 ? (carta = codigocarta) : (carta = codigocarta2);
                printf ("A carta vencedora da rodada é: Carta %d\n", carta);
            break;
           
            case 5: 
                strcpy(nomeatributo2, "Densidade Populacional");

                printf("*'*'* Segundo Atributo:  DENSIDADE POPULACIONAL *'*'*:\n");
                carta1atributo2 = demo; 
                carta2atributo2 = demo2;
                demo < demo2 ? (carta = codigocarta) : (carta = codigocarta2); // menor densidade ganha
                printf ("A carta vencedora da rodada é: Carta %d\n", carta);
            break;
            
            case 6:
                strcpy(nomeatributo2, "Renda Per Capita");

                printf("*'*'* Segundo Atributo:  RENDA PER CAPITA *'*'*:\n");
                carta1atributo2 = capita;
                carta2atributo2 = capita2; 
                capita > capita2 ? (carta = codigocarta) : (carta = codigocarta2);
                printf ("A carta vencedora da rodada é: Carta %d\n", carta);
            break;
            
            case 7: 
                strcpy(nomeatributo2, "Super Poder");

                printf("*'*'* Segundo Atributo:  SUPER PODER *'*'*:\n");
                carta1atributo2 = superpoder;
                carta2atributo2 = superpoder2; 
                superpoder > superpoder2 ? (carta = codigocarta) : (carta = codigocarta2);
                printf ("A carta vencedora da rodada é: Carta %d\n", carta);
            break;
           
            default:
                printf("Atributo 2 inválido.\n");
                return 1;  
            break;

        } }
        // LOGICA PARA SOMAR E EXIBIR A RODADA FINAL

        float somacarta1 = carta1atributo1 + carta1atributo2; // soma rodada final
        float somacarta2 = carta2atributo1 + carta2atributo2;
        printf("\n");
        printf("   °°° RODADA FINAL: A MAIOR CARTA VENCE °°°\n");
        printf(   " Atributos escolhidos: %s e %s\n", nomeatributo1, nomeatributo2);

        //CARTA1
        printf("\n");
        printf("Placar Carta %d: %f\n", codigocarta, somacarta1); //o numero da carta que aparecerá para o jogador é o codigo carta inserido na entrada do jogo
        printf("Cidade %s, Estado %s\n", cidade, estado);
       
        printf("\n");
        
        //CARTA 2
        printf("Placar Carta %d: %.2f\n", codigocarta2, somacarta2); 
        printf("Cidade %s, Estado %s\n", cidade2, estado2);
        printf("\n");
        
        //EXIBIR GANHADOR RODADA FINAL
        if (somacarta1 > somacarta2) {
            printf("      *-*-*-*-*-* CARTA %d VENCEU *-*-*-*-*-*  \n", codigocarta);
                        
        } else if (somacarta2 > somacarta1) {
            printf("     *-*-*-*-*-* CARTA %d VENCEU *-*-*-*-*-* \n", codigocarta2);
            
       
        } else {
            printf("          ###### EMPATOU ###### !\n");
        }
    
    
    

      
       
    

//Karol Botelho
return 0;
}
