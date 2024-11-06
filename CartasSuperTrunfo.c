#include <stdio.h>

float caculatePopulationalDensity(int population, float area) {
    return (float) population / area;
}

float pibPerCapita(int population, float pib) {
    return (float) pib / population;
}

void main() {
    char state[30], city[30];
    int population, touristicPoints, cityCode;
    float area, pib;

    printf("Insira o nome do Estado:\n");
    scanf("%s", state);

    printf("Informe o nome da cidade:\n");
    scanf("%s", city);

    printf("Informe o codigo da cidade:\n");
    scanf("%d", &cityCode);

    printf("Informe a populacao da cidade:\n");
    scanf("%d", &population);

    printf("Informe a quantidade de pontos turisticos da cidade:\n");
    scanf("%d", &touristicPoints);

    printf("Informe a área da cidade:\n");
    scanf("%f", &area);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &pib);

    printf("***** SUPER-TRUNFO *****\n");
    printf("Codigo da Carta: %c0%d\n", state[0], cityCode);
    printf("Estado: %s\n", state);
    printf("Nome da Cidade: %s\n", city);
    printf("Populacao: %d\n", population);
    printf("Area: %.2f km2\n", area);
    printf("PIB: R$ %.2f\n", pib);
    printf("Numero de Pontos Turisticos: %d\n", touristicPoints);
    printf("PIB Per Capita: R$ %.2f\n", pibPerCapita(population, pib));
    printf("Densidade populacional: %.2f km²\n", caculatePopulationalDensity(population, area));
}
