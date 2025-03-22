//Exercício - Operadora

#include <stdio.h>

int main() {

    int minutos;
    double planoBasico, excedente;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    planoBasico = 50;

    if (minutos <= 100){
        printf("Valor a pagar: R$%.2lf", planoBasico);
    }
    else{
        excedente = planoBasico + 2 * (minutos - 100);
        printf("Valor a pagar: R$%.2lf", excedente);
    }

    return 0;

}