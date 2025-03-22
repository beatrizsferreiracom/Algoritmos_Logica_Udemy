//Exercício - Dardo

#include <stdio.h>

int main() {

    double a, b, c, maior;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if (a > b && a > c){
        maior = a;
    }
    else if(b > c){
        maior = b;
    }
    else{
        maior = c;
    }

    printf("Maior distancia = %.2lf", maior);

    return 0;

}