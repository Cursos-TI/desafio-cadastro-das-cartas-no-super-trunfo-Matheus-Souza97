#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {

//ATRIBUTOS CARTA 1

    char estado1[3], codigo1[4], cidade1[50];
    float area1, pib1, densidade_populacional1, pib_per_capita1, super_poder1;
    int pontos_turisticos1;
    unsigned long int populacao1;

//ATRIBUTOS CARTA 2

    char estado2[3], codigo2[4], cidade2[50];
    float area2, pib2, densidade_populacional2, pib_per_capita2, super_poder2;
    int pontos_turisticos2;
    unsigned long int populacao2;

//VARIAVEIS DE COMPARAÇÃO

    unsigned long int resultado_populacao;
    float resultado_area, resultado_pib, resultado_densidade_populacional, resultdo_pib_per_capita, resultado_super_poder;
    int resultado_pontos_turisticos;

//DECLARAÇÃO DOS ATRIBUTOS CARTA 1

        printf("Informe as caracteristicas da carta 1\n");
        printf("Estado: ");
        scanf("%s",estado1);
        
        printf("Código: ");
        scanf("%s", codigo1);

        printf("Cidade: ");
        scanf("%s", cidade1);

        printf("População: ");
        scanf("%lu", &populacao1);
        
        printf("Área: ");
        scanf("%f", &area1);

        printf("PIB: ");
        scanf("%f", &pib1);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos1);
      
//DECLARAÇÃO DOS ATRIBUTOS CARTA 2

        printf("Informe as caracteristicas da carta 2\n");
        printf("Estado: ");
        scanf("%s",estado2);
        
        printf("Código: ");
        scanf("%s", codigo2);

        printf("Cidade: ");
        scanf("%s", cidade2);

        printf("População: ");
        scanf("%lu", &populacao2);
        
        printf("Área: ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf("%f", &pib2);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos2);

//CÁLCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA DA CARTA 1

        densidade_populacional1 = populacao1 / area1;
        pib_per_capita1 = (pib1 * 1000000000) / populacao1;

//CÁLCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA DA CARTA 2

        densidade_populacional2 = populacao2 / area2;
        pib_per_capita2 = (pib2 * 1000000000) / populacao2;

//CÁLCULO DO SUPER PODER DA CARTA 1

        super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

//CÁLCULO DO SUPER PODER DA CARTA 2

        super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

//APRESENTAÇÃO DOS ATRIBUTOS DECLARADOS

    printf("Atributos declarados:\n\n");

//CARTA 1
        printf("Carta 1\n");
        printf("Estado: %s\n",estado1);
        printf("Código: %s\n",codigo1);
        printf("Cidade: %s\n",cidade1);
        printf("População: %lu\n",populacao1);
        printf("Área: %.2fkm²\n",area1);
        printf("PIB: %.2f bilhões de reais\n",pib1);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
        printf("Super Poder: %.2f \n\n", super_poder1);

//CARTA 2       
        
        printf("Carta 2\n");
        printf("Estado: %s\n",estado2);
        printf("Código: %s\n",codigo2);
        printf("Cidade: %s\n",cidade2);
        printf("População: %lu\n",populacao2);
        printf("Área: %.2fkm²\n",area2);
        printf("PIB: %.2f bilhões de reais\n",pib2);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
        printf("Super Poder: %.2f \n\n", super_poder2);

//COMPARAÇÕES DE ATRIBUTOS

        resultado_populacao = populacao1 > populacao2;
        resultado_area = area1 > area2;
        resultado_pib = pib1 > pib2;
        resultado_pontos_turisticos = pontos_turisticos1 > pontos_turisticos2;
        resultado_densidade_populacional = densidade_populacional1 < densidade_populacional2;
        resultdo_pib_per_capita = pib_per_capita1 > pib_per_capita2;
        resultado_super_poder = super_poder1 > super_poder2;

//EXIBIÇÃO DAS COMPARAÇÕES

        printf("Comparação das Cartas:\n");
        printf("População: Carta %d Venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
        printf("Área: Carta %d Venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
        printf("PIB: Carta %d Venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
        printf("Número de Pontos Turísticos: Carta %d Venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);
        printf("Densidade Populacional: Carta %d Venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2, (densidade_populacional1 < densidade_populacional2) ? 0 : 1);
        printf("PIB per Capita: Carta %d Venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
        printf("Super Poder: Carta %d Venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2) ? 1 : 0);


        return 0;

    }
