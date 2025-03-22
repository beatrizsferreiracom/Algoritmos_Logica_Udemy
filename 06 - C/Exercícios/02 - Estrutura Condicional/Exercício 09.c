//Exercício - Lanchonete

#include <stdio.h>

int main() {

    int codigo, quant;
    double valor;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);

    printf("Quantidade comprada: ");
    scanf("%d", &quant);

    switch (codigo){
        case 1:
            valor = 5.0 * quant;
            break;
        case 2:
            valor = 3.5 * quant;
            break;
        case 3:
            valor = 4.8 * quant;
            break;
        case 4:
            valor = 8.9 * quant;
            break;
        case 5:
            valor = 7.32 * quant;
            break;
    }

    printf("Valor a pagar: R$%.2lf", valor);

    return 0;

}