// 4. Volume do cubo 

#include <stdio.h>
#include <math.h> // Necessário para a função pow()

int main() {
    float aresta, volume;
    
    printf("Digite o valor da aresta do cubo: ");
    scanf("%f", &aresta);
    
    // O volume de um cubo é a aresta elevada ao cubo (a³)
    volume = pow(aresta, 3); 
    
    printf("O volume do cubo e: %.2f\n", volume);
    
    return 0;
}
