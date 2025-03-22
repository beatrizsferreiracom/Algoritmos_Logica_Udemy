//Exercício - Aumento

#include <stdio.h>

int main() {

    double salarioAtual, salarioFinal, aumento, porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salarioAtual);

    if (salarioAtual <= 1000){
        porcentagem = 20.0;
    }
    else if (salarioAtual <= 3000){
        porcentagem = 15.0;
    }
    else if (salarioAtual <= 8000){
        porcentagem = 10.0;
    }
    else{
        porcentagem = 5.0;
    }

    aumento = salarioAtual * (porcentagem / 100);
    salarioFinal = salarioAtual + aumento;

    printf("Novo salario = R$%.2lf\n", salarioFinal);
    printf("Aumento = R$%.2lf\n", aumento);
    printf("Porcentagem = %.lf %%", porcentagem);

    return 0;

}