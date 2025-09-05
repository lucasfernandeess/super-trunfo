#include <stdio.h>

int main() {
    // Declaração das variáveis carta 1
    int carta1;
    char estado[50];
    char codigo_da_carta[10];
    char nome_da_cidade[50];
    unsigned long int populacao;
    float area_em_km2;
    float pib;
    int numero_de_pontos_turisticos;
    float super_poder = populacao + area_em_km2 + numero_de_pontos_turisticos + (pib / populacao) + !(populacao / area_em_km2);

    // Declaração das variáveis carta 2
    int carta2;
    char estado2[50];
    char codigo_da_carta2[10];
    char nome_da_cidade2[50];
    unsigned long int populacao2;
    float area_em_km22;
    float pib2;
    int numero_de_pontos_turisticos2;
    float super_poder2 = populacao2 + area_em_km22 + numero_de_pontos_turisticos2 + (pib2 / populacao2) + !(populacao2 / area_em_km22);

// carta 1
    printf("Carta 1\n");
    printf("Estado:");
    scanf("%s", &estado);
    printf("Código da carta:");
    scanf("%s", &codigo_da_carta);
    printf("Cidade:");
    scanf("%s", &nome_da_cidade);
    printf("População:");
    scanf("%lu", &populacao);
    printf("Área (km²):");
    scanf("%f", &area_em_km2);
    printf("PIB:");
    scanf("%f", &pib);
    printf("Número de pontos turísticos:");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("\n");

    printf("=== Carta 1 ====\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %lu\n", populacao);
    printf("Área em km²: %f\n", area_em_km2);
    printf("PIB: R$ %f milhões\n", pib);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos);
    printf("Densidade Populacional: %f hab/km²\n", populacao / area_em_km2);
    printf("PIB per Capita: %f reais\n", pib / populacao);
    printf("Super poder: %f.2\n", populacao + area_em_km2 + numero_de_pontos_turisticos + (pib / populacao) + !(populacao / area_em_km2));
    printf("\n");
// carta 2
    printf("Carta 2\n");
    printf("Estado:");
    scanf("%s", &estado2);
    printf("Código da carta:");
    scanf("%s", &codigo_da_carta2);
    printf("Cidade:");
    scanf("%s", &nome_da_cidade2);
    printf("População:");
    scanf("%lu", &populacao2);
    printf("Área (km²):");
    scanf("%f", &area_em_km22);
    printf("PIB:");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:");
    scanf("%d", &numero_de_pontos_turisticos2);
   
    printf("\n");
//carta 2
    printf("=== Carta 2 ====\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo_da_carta2);
    printf("Cidade: %s\n", nome_da_cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área em km²: %f\n", area_em_km22);
    printf("PIB: R$ %f milhões\n", pib2);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %f hab/km²\n", populacao2 / area_em_km22);
    printf("PIB per Capita: %f reais\n", pib2 / populacao2);
    printf("Super poder: %f.2\n", populacao2 + area_em_km22 + numero_de_pontos_turisticos2 + (pib2 / populacao2) + !(populacao2 / area_em_km22));
    printf("\n");
    //comparação
    printf("Comparação de Cartas:\n");
    printf("População: Carta 1 venceu %d\n", populacao > populacao2);
    printf("Área: Carta 1 venceu %d\n", area_em_km2 > area_em_km22);
    printf("PIB: Carta 1 venceu %d\n", pib > pib2);
    printf("Pontos Turísticos: Carta 1 venceu %d\n", numero_de_pontos_turisticos > numero_de_pontos_turisticos2);
    printf("Densidade Populacional: Carta 2 venceu %d\n", !(populacao / area_em_km2) > !(populacao2 / area_em_km22));
    printf("PIB per Capita: Carta 1 venceu %d\n",  (pib / populacao) > (pib2 / populacao2));
    printf("Super Poder: Carta 1 venceu %d\n", super_poder > super_poder2);
    printf("\n");
//Comparar um atributo escolhido:
printf("Comparação de cartas (Atributo: População)\n");

printf("Carta 1 - %s, %s, %lu\n",  nome_da_cidade, estado, populacao);
printf("Carta 2 - %s, %s, %lu\n", nome_da_cidade2, estado2, populacao2);
    if (populacao > populacao2){
        printf("=== Carta 1 VENCEU ===");
    }
    else if (populacao < populacao2){
        printf("=== Carta 2 VENCEU ===");
    }
    else {
        ("=== EMPARE ===");
    }
    return 0;
    }
