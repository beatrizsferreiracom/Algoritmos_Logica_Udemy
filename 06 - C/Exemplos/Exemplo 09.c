//Exemplo 09 - Entrada de Dados

#include <stdio.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
    }

void ler_texto(char *buffer, int length){
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}

int main(){

    int idade;
    double salario, altura;
    char genero[10], nome[50];

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o salario: ");
    scanf("%lf", &salario);

    printf("Digite a altura: ");
    scanf("%lf", &altura);

    printf("Digite o genero: ");
    limpar_entrada();
    ler_texto(genero, 2);

    printf("Digite o nome: ");
    limpar_entrada();
    ler_texto(nome, 50);

    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("ALTURA = %.2lf\n", altura);
    printf("GENERO = %s\n", genero);
    printf("NOME = %s\n", nome);

    return 0;

}