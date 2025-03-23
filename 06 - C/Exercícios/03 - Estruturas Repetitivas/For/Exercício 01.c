//Exercício - Tabuada

#include <stdio.h>

int main(){

    int i, numero, multi;

    printf("Deseja a tabuada para qual valor? ");
    scanf("%d", &numero);

    for(i = 1; i <= 10; i++){

        multi = i * numero;

        printf("%d x %d = %d\n", numero, i, multi);
    }

    return 0;

}