//Exercício - Pares Consecutivos

#include <stdio.h>

int main() {

    int x, soma;

    soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    while(x != 0){
        
        if(x % 2 != 0){
            x = x + 1;
        }

        soma = 5 * x + 20;

        printf("Soma = %d\n", soma);

        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
    
    }

    return 0;

}