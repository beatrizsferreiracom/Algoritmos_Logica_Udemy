//Exercício - Divisão

#include <stdio.h>

int main(){

    int i, N;
    double x, y, divisao;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        printf("\nEntre com o numerador: ");
        scanf("%lf", &x);

        printf("Entre com o denominador: ");
        scanf("%lf", &y);

        if(y != 0){
            divisao = (double) x / y;
            printf("Divisao = %.2lf\n", divisao);
        }
        else{
            printf("Divisao impossivel\n");
        }
    }

    return 0;
    
}