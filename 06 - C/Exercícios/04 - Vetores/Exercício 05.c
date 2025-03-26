//Exercício - Maior Posição

#include <stdio.h>

int main(){

    int i, N, posicao;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    double vet[N];

    for(i = 0; i < N; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maior = vet[0];
    posicao = 0;

    for(i = 0; i < N; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }

    printf("\nMaior valor = %1.lf\n", maior);
    printf("Posicao do maior valor = %d", posicao);

    return 0;

}