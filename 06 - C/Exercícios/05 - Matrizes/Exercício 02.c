//Exercício - Soma Linhas

#include <stdio.h>

int main(){

    int i, j, linha, coluna;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &linha);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &coluna);

    double mat[linha][coluna], vet[linha];

    for(i = 0; i < linha; i++){
        printf("\nDigite os elementos da %da linha: \n", i+1);
        for(j = 0; j < coluna; j++){
            scanf("%lf", &mat[i][j]);
        }
    }

    printf("\nVetor gerado:\n");

    for(i = 0; i < linha; i++){
        vet[i] = 0;
        for(j = 0; j < coluna; j++){
            vet[i] = vet[i] + mat[i][j];
        }
        printf("%.1lf\n", vet[i]);
    }

    return 0;

}