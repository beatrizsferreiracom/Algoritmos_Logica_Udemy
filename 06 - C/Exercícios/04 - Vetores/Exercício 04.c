//Exercício - Números Pares

#include <stdio.h>

int main(){

    int i, N, pares;

    pares = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    int vet[N];

    for(i = 0; i < N; i++){

        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    printf("\nNumeros Pares:\n");

    for(i = 0; i < N; i++){

        if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
            pares++;
        }
    }

    printf("\n\nQuantidade de pares = %d", pares);

    return 0;

}