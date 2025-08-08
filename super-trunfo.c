#include <stdio.h>

int main() {
    // Declaração das variáveis
    int carta1, carta2;
    char estado[50];
    char codigo_da_carta[10];
    char nome_da_cidade[50];
    int populacao;
    float area_em_km2;
    float pib;
    int numero_de_pontos_turisticos;
// carta 1
    printf("Carta 1\n");
    printf("Estado:");
    scanf("%s", &estado);
    printf("Código da carta:");
    scanf("%s", &codigo_da_carta);
    printf("Cidade:");
    scanf("%s", &nome_da_cidade);
    printf("População:");
    scanf("%d", &populacao);
    printf("Área (km²):");
    scanf("%f", &area_em_km2);
    printf("PIB:");
    scanf("%f", &pib);
    printf("Número de pontos turísticos:");
    scanf("%d", &numero_de_pontos_turisticos);
    printf("\n");

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %f\n", area_em_km2);
    printf("PIB: R$ %f milhões\n", pib);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos);
    printf("\n");
// carta 2
    printf("Carta 2\n");
    printf("Estado:");
    scanf("%s", &estado);
    printf("Código da carta:");
    scanf("%s", &codigo_da_carta);
    printf("Cidade:");
    scanf("%s", &nome_da_cidade);
    printf("População:");
    scanf("%d", &populacao);
    printf("Área (km²):");
    scanf("%f", &area_em_km2);
    printf("PIB:");
    scanf("%f", &pib);
    printf("Número de pontos turísticos:");
    scanf("%d", &numero_de_pontos_turisticos);
    
    printf("\n");
//carta 2
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo_da_carta);
    printf("Cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área em km²: %f\n", area_em_km2);
    printf("PIB: R$ %f milhões\n", pib);
    printf("Pontos turísticos: %d\n", numero_de_pontos_turisticos);
    return 0;
    }