//Exercício - Média Pares

#include <stdio.h>

int main(){

    int i, N, pares;
    double soma, media;

    soma = 0;
    pares = 0;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &N);

    int vet[N];

    for(i = 0; i < N; i++){

        printf("Digite um numero: ");
        scanf("%d", &vet[i]);

        if(vet[i] % 2 == 0){
            soma = soma + vet[i];
            pares++;
        }
    }

    if(pares == 0){
        printf("Nenhum numero par");
    }
    else{
        media = (double) soma / pares;
        printf("Media dos pares = %.1lf", media);
    }
    
    return 0;

}