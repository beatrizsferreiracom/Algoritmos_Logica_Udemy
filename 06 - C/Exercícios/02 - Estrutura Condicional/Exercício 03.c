//Exercício - Menor de Três

#include <stdio.h>

int main() {

    int a, b, c, menor;

    printf("Coeficiente a: ");
    scanf("%d", &a);

    printf("Coeficiente b: ");
    scanf("%d", &b);

    printf("Coeficiente c: ");
    scanf("%d", &c);

    if (a < b && a < c){
        menor = a;
    }
    else if (b < c){
        menor = b;
    }
    else{
        menor = c;
    }

    printf("Menor = %d", menor);

    return 0;

}