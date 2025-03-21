//Exercício - Troco

#include <stdio.h>

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

    printf("Troco = R$%.2lf", troco);

    return 0;

}