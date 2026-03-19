// 2. Área de um triângulo 

#include <stdio.h>

int main() {
    float base, altura, area;
    
    printf("Digite a base do triangulo: ");
    scanf("%f", &base);
    
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    
    // Fórmula da área do triângulo: (base * altura) / 2
    area = (base * altura) / 2.0;
    
    printf("A area do triangulo e: %.2f\n", area);
    
    return 0;
}
