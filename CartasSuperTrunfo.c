#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

    int main() {

//ATRIBUTOS CARTA 1

    char estado1[3], codigo1[4], cidade1[50];
    float area1, pib1, densidade_populacional1, pib_per_capita1;
    int populacao1, pontos_turisticos1;

//ATRIBUTOS CARTA 2

    char estado2[3], codigo2[4], cidade2[50];
    float area2, pib2, densidade_populacional2, pib_per_capita2;
    int populacao2, pontos_turisticos2;

//DECLARAÇÃO DOS ATRIBUTOS CARTA 1

        printf("Informe as caracteristicas da carta 1\n");
        printf("Estado: ");
        scanf("%s",estado1);
        
        printf("Código: ");
        scanf("%s", codigo1);

        printf("Cidade: ");
        scanf("%s", cidade1);

        printf("População: ");
        scanf("%d", &populacao1);
        
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
        scanf("%d", &populacao2);
        
        printf("Área: ");
        scanf("%f", &area2);

        printf("PIB: ");
        scanf("%f", &pib2);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontos_turisticos2);

//Cálculo da Densidade Populacional e PIB per Capita CARTA 1

        densidade_populacional1 = populacao1 / area1;
        pib_per_capita1 = (pib1 * 1000000000) / populacao1;

//Cálculo da Densidade Populacional e PIB per Capita CARTA 2

        densidade_populacional2 = populacao2 / area2;
        pib_per_capita2 = (pib2 * 1000000000) / populacao2;

//APRESENTAÇÃO DOS ATRIBUTOS DECLARADOS

    printf("Atributos declarados:\n\n");

//CARTA 1
        printf("Carta 1\n");
        printf("Estado: %s\n",estado1);
        printf("Código: %s\n",codigo1);
        printf("Cidade: %s\n",cidade1);
        printf("População: %d\n",populacao1);
        printf("Área: %.2fkm²\n",area1);
        printf("PIB: %.2f bilhões de reais\n",pib1);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB per Capita: %.2f reais\n\n", pib_per_capita1);

//CARTA 2       
        
        printf("Carta 2\n");
        printf("Estado: %s\n",estado2);
        printf("Código: %s\n",codigo2);
        printf("Cidade: %s\n",cidade2);
        printf("População: %d\n",populacao2);
        printf("Área: %.2fkm²\n",area2);
        printf("PIB: %.2f bilhões de reais\n",pib2);
        printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB per Capita: %.2f reais\n\n", pib_per_capita2);
    
    return 0;
}
