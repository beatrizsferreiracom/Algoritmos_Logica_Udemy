//Exercício - Glicose

#include <stdio.h>

int main() {

    double glicose;

    printf("Digite a medida da glicose: ");
    scanf("%lf", &glicose);

    if (glicose <= 100){
        printf("Classificacao: Normal");
    }
    else if(glicose <= 140){
        printf("Classificacao: Elevado");
    }
    else{
        printf("Classificacao: Diabetes");
    }

    return 0;

}