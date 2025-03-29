//Exercício - Mais Velho

#include <stdio.h>
#include <string.h>

int main(){

    int i, N, maisVelho, posicao;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];

    for(i = 0; i < N; i++){

        printf("\nDados da %da pessoa:\n", i+1);
        printf("Nome: ");
	scanf("%s", &nome[i][0]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
    }

    maisVelho = idade[0];
    posicao = 0;

    for(i = 0; i < N; i++){

        if(idade[i] > maisVelho){
            maisVelho = idade[i];
            posicao = i;
        }
    }

    printf("\nPessoa mais velha: %s", nome[posicao]);
    
    return 0;

}
