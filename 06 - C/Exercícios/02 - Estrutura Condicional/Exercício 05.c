//Exercício - Troco Verificado

#include <stdio.h>
#include <stdlib.h>

int main() {

    int quantidade;
    double preco, dinheiro, troco;

    printf("Preco unitario do produto: ");
    scanf("%lf", &preco);

    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);

    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiro);

    troco = dinheiro - (preco * quantidade);

    if (troco >= 0){
        printf("Troco = R$%.2lf", troco);
    }
    else{
        troco = abs(troco);
        printf("Dinheiro insuficiente. Faltam R$%.2lf", troco);
    } 

    return 0;

}