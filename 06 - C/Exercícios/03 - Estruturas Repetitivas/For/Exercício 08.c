//Exercício - Fatorial

#include <stdio.h>

int main(){

    int i, N, fatorial;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    fatorial = 1;

    for(i = 1; i <= N; i++){

        fatorial = fatorial * i;

    }

    printf("Fatorial = %d", fatorial);

    return 0;
    
}