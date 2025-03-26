//Exercício - Negativos Matriz

#include <stdio.h>

int main(){

    int i, j, linha, coluna;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &linha);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &coluna);

    int mat[linha][coluna];

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            printf("Elemento: [%d, %d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nValores negativos:\n");

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(mat[i][j] < 0){
                printf("%d\n", mat[i][j]);
            }
        }
    }

    return 0;

}