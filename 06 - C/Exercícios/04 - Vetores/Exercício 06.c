//Exercício - Soma Vetores

#include <stdio.h>

int main(){

    int i, N;

    printf("Quantos valores vai ter cada vetor? ");
    scanf("%d", &N);

    int A[N], B[N], C[N];

    printf("\nDigite os valores do vetor A:\n");
    for(i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    printf("\nDigite os valores do vetor B:\n");
    for(i = 0; i < N; i++){
        scanf("%d", &B[i]);
    }

    printf("Vetor resultante:\n");

    for(i = 0; i < N; i++){
        C[i] = A[i] + B[i];
        printf("%d\n", C[i]);
    }

    return 0;

}