//Exercício - Crescente

#include <stdio.h>

int main(){

    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while(x != y){
       
        if(x < y){
            printf("Crescente\n");
        }
        else{
            printf("Decrescente\n");
        }

        printf("Digite outros dois numeros:\n");
        scanf("%d", &x);
        scanf("%d", &y);
    }

    printf("Os numeros sao iguais");

    return 0;
}