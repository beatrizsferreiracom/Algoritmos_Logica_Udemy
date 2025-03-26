//Exercício - Dados Pessoas

#include <stdio.h>
#include <string.h>

int main(){

    int i, N, homem, mulher;
    double media, soma, menor, maior;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    double altura[N];
    char genero[N];

    soma = 0;
    homem = 0;
    mulher = 0;

    for(i = 0; i < N; i++){

        printf("\nAltura da %da pessoa: ", i+1);
        scanf("%lf", &altura[i]);
		printf("Genero da %da pessoa: ", i+1);
        scanf(" %c", &genero[i]);

        if(genero[i] == 'M' || genero[i] == 'm'){
            homem++;
        }
        else{
            mulher++;
            soma = soma + altura[i];
        }
    }

    media = (double) soma / mulher;

    menor = altura[0];
    maior = altura[0];

    for(i = 0; i < N; i++){

        if(menor > altura[i]){
            menor = altura[i];
        }

        if (maior < altura[i]){
            maior = altura[i];
        }

    }

    printf("\nMenor altura = %.2lf", menor);
    printf("\nMaior altura = %.2lf", maior);
    printf("\nMedia das alturas das mulheres = %.2lf", media);
    printf("\nNumero de homens = %d", homem);
    
    return 0;

}