//Exercício - Abaixo da Média

#include <stdio.h>

int main(){

    int i, N;
    double soma, media;

    soma = 0;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    double vet[N];

    for(i = 0; i < N; i++){

        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);

        soma = soma + vet[i];
    }

    media = soma / N;
    
    printf("\nMedia do vetor = %.3lf", media);

    printf("\nElementos abaixo da media:\n");
    for(i = 0; i < N; i++){
        if(vet[i] < media){
            printf("%.1lf\n", vet[i]);
        }
    }

    return 0;

}