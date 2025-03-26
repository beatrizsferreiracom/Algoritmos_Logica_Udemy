//Exercício - Matriz Geral

#include <stdio.h>
#include <math.h>

int main() {

    int i, j, ordem, linha, coluna;
    double soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &ordem);

    double mat[ordem][ordem];

    soma = 0;

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%lf", &mat[i][j]);

            if(mat[i][j] > 0){
                soma = soma + mat[i][j];
            }
        }
    }

    printf("\nSoma dos positivos = %.1lf", soma);

    printf("\n\nEscolha uma linha: ");
    scanf("%d", &linha);

    printf("Linha escolhida: ");
    for(j = 0; j < ordem; j++){
        printf("%.1lf ", mat[linha][j]);
    }

    printf("\n\nEscolha uma coluna: ");
    scanf("%d", &coluna);

    printf("Coluna escolhida: ");
    for(i = 0; i < ordem; i++){
        printf("%.1lf ", mat[i][coluna]);
    }

    printf("\n\nDiagonal principal: ");
    for(i = 0; i < ordem; i++){
        printf("%.1lf ", mat[i][i]);
    }

    printf("\n\nMatriz alterada:\n");
    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            if(mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j], 2);
            }
            printf("%.1lf ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}
