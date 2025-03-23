//Exercício - Dentro Fora

#include <stdio.h>

int main(){

    int i, N, x, dentro, fora;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &N);

    dentro = 0;
    fora = 0;

    for(i = 1; i <= N; i++){

        printf("Digite um numero: ");
        scanf("%d", &x);

        if(x < 10 || x > 20){
            fora = fora + 1;
        }
        else{
            dentro = dentro + 1;
        }
    }

    printf("%d dentro\n", dentro);
    printf("%d fora", fora);

    return 0;

}