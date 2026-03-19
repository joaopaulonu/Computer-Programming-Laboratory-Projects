// 5. Consumo do veículo (km/l) 

#include <stdio.h>

int main() {
    float distancia_km, combustivel_litros, consumo;
    
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia_km);
    
    printf("Digite o total de combustivel gasto (em litros): ");
    scanf("%f", &combustivel_litros);
    
    // Consumo médio é a distância dividida pelo combustível gasto
    consumo = distancia_km / combustivel_litros;
    
    printf("O consumo do veiculo foi de: %.2f km/l\n", consumo);
    
    return 0;
}
