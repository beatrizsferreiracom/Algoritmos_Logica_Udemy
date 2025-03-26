//Exercício - Soma Matrizes

#include <stdio.h>

int main(){

    int i, j, linha, coluna;

    printf("Quantas linhas vai ter cada matriz? ");
    scanf("%d", &linha);
    printf("Quantas colunas vai ter cada matriz? ");
    scanf("%d", &coluna);

    int A[linha][coluna], B[linha][coluna], C[linha][coluna];

    printf("\nDigite os valores da matriz A:\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Elemento: [%d, %d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("\nDigite os valores da matriz B:\n");
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Elemento: [%d, %d]: ", i, j);
            scanf("%d", &B[i][j]);
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf("\nMatriz soma:");

    for(i = 0; i < linha; i++){
        printf("\n");
        for(j = 0; j < coluna; j++){
            printf("%d ", C[i][j]);
        }
    }

    return 0;

}