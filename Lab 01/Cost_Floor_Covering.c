#include <stdio.h>

int main() {
    float comprimento, largura, preco_metro, area, custo_total;

    printf("Digite o comprimento da sala (metros): ");
    scanf("%f", &comprimento);

    printf("Digite a largura da sala (metros): ");
    scanf("%f", &largura);

    printf("Digite o preco do metro quadrado do carpete: R$ ");
    scanf("%f", &preco_metro);

    // Cálculo da área e do custo correspondente
    area = comprimento * largura;
    custo_total = area * preco_metro;

    printf("\nArea total da sala: %.2f m²\n", area);
    printf("Custo total para forrar o piso: R$ %.2f\n", custo_total);

    return 0;
}
