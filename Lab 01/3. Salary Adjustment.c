// 3. Reajuste Salarial 

#include <stdio.h>

int main() {
    float salario_atual, percentual_reajuste, novo_salario;
    
    printf("Digite o salario mensal atual: R$ ");
    scanf("%f", &salario_atual);
    
    printf("Digite o percentual de reajuste (%%): ");
    scanf("%f", &percentual_reajuste);
    
    // Calcula o novo salário somando o valor do reajuste
    novo_salario = salario_atual + (salario_atual * (percentual_reajuste / 100.0));
    
    printf("O novo salario e: R$ %.2f\n", novo_salario);
    
    return 0;
}
