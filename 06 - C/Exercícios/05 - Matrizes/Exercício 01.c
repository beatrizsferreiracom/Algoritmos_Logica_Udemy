//Exercício - Diagonal Negativos

#include <stdio.h>

int main(){

    int i, j, ordem, negativos = 0;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &ordem);

    int mat[ordem][ordem];

    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            printf("Elemento: [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);

            if(mat[i][j] < 0){
                negativos++;
            }
        }
    }

    printf("\nDiagonal principal:\n");

    for(i = 0; i < ordem; i++){
        printf("%d ", mat[i][i]);
    }

    printf("\nQuantidade de negativos = %d", negativos);

    return 0;

}