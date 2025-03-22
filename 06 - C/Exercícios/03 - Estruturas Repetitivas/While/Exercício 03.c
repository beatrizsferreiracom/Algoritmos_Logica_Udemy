//Exercício - Senha Fixa

#include <stdio.h>
#include <string.h>

int main(){

    char senha[4];

    printf("Digite a senha: ");
    scanf("%s", senha);

    while(strcmp(senha, "2002") != 0){
       
        printf("Senha Invalida! Tente novamente: ");
        scanf("%s", senha);
    }

    printf("Acesso permitido!");
    
    return 0;
}