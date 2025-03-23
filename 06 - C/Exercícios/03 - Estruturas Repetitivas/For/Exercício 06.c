//Exercício - Média Ponderada

#include <stdio.h>

int main(){

    int i, N;
    double a, b, c, media;

    printf("Quantos casos voce vai digitar? ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        printf("Digite tres numeros:\n");
        scanf("%lf", &a);
        scanf("%lf", &b);
        scanf("%lf", &c);

        media = (a * 2 + b * 3 + c * 5) / 10.0;

        printf("Media = %.1lf\n", media);
    }

    return 0;
    
}