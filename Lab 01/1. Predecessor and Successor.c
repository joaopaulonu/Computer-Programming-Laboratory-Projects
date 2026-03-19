// Aula 01

// 1. Antecessor e Sucessor

#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    
    // Calcula e imprime diretamente o antecessor e o sucessor
    printf("Antecessor: %d\n", numero - 1);
    printf("Sucessor: %d\n", numero + 1);
    
    return 0;
}
