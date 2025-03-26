//Exercício - Soma Vetor

#include <stdio.h>

int main(){

    int i, N;
    double soma, media;

    soma = 0;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for(i = 0; i < N; i++){

        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

        soma = soma + vet[i];
    }

    media = soma / N;
    
    printf("\nValores = ");

    for(i = 0; i < N; i++){
        printf("%.1lf | ", vet[i]);
    }

    printf("\nSoma = %.2lf", soma);
    printf("\nMedia = %.2lf", media);

    return 0;

}