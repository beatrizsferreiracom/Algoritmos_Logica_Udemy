//Exercício - Cada Linha

#include <stdio.h>

int main() {

    int i, j, ordem, maior;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &ordem);

    int mat[ordem][ordem];

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            printf("Elemento [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMaior elemento de cada linha:\n");

    for(i = 0; i < ordem; i++) {
        maior = mat[i][0];
        for(j = 1; j < ordem; j++) {
            if(mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
        printf("%d\n", maior);
    }

    return 0;
}
