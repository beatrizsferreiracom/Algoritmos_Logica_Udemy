//Exercício - Media Idades

#include <stdio.h>

int main(){

    int idade, soma, contador;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    soma = 0;
    contador = 0;

    while(idade >= 0){
       
        soma = soma + idade;
        contador = contador + 1;

        scanf("%d", &idade);

    }

    if(contador == 0){
        printf("Impossivel calcular");
    }
    else{
        media = (double) soma / contador;
        printf("Media = %.2lf", media);
    }
    
    return 0;
}