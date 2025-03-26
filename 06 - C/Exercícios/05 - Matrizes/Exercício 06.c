//Exercício - Acima Diagonal

#include <stdio.h>

int main() {

    int i, j, ordem, soma;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &ordem);

    int mat[ordem][ordem];

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    soma = 0;

    for(i = 0; i < ordem; i++) {
        for(j = i+1; j < ordem; j++) {
            soma = soma  + mat[i][j];
        }
    }

    printf("\nSoma dos elementos acima da diagonal principal = %d", soma);

    return 0;
}
