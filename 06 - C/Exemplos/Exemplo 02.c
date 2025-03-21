//Exemplo 02 - Variáveis

#include <stdio.h>
#include <string.h>

int main() {

    int idade;
    double salario, altura;
    char genero;
    char nome[50];

    idade = 20;
    salario = 5800.5;
    altura = 1.63;
    genero = 'F';
    strcpy(nome, "Maria Silva");

    printf("Idade = %d\n", idade);
    printf("Salario %f\n", salario);
    printf("Altura = %f\n", altura);
    printf("Genero %s\n", genero);
    printf("Nome = %s\n", nome);

    return 0;
    
}