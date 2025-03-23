//Exercício - Dentro Fora

#include <stdio.h>

int main(){

    int i, N, x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++){

        printf("Digite um numero: ");
        scanf("%d", &x);

        if(x == 0){
            printf("Nulo\n");
        }
        else if(x % 2 == 0){
            if(x > 0){
                printf("Par positivo\n");
            }
            else{
                printf("Par negativo\n");
            }
        }
        else{
            if(x > 0){
                printf("Impar positivo\n");
            }
            else{
                printf("Impar negativo\n");
            }
        }
    }

    return 0;

}