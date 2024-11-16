#include <stdio.h>

//constante:
//#define SALARIOFIXO = 3200 

int bonusVenda(float vVendas) {
    return (5.0 / 100) * vVendas;
}

int main() {
    float valorVendas, salarioFixo, salarioTotal;
    
//Para usar a constante SALARIOFIXo bastaria escluir o printf e scan sobre a variavel salarioFixo.
    printf("Digite o valor do salário fixo do funcionario: \n");
    scanf("%f", &salarioFixo);
//
    printf("Digite o valor total de vendas do funcionario: \n");
    scanf("%f", &valorVendas);

//Para usar a constante, basta trocar a variável pela constante SALARIOFIXO
    salarioTotal = salarioFixo + bonusVenda(valorVendas);
    
    printf("O salario total do funcionario r: R$%.2f", salarioTotal);
    
    return 0;
}