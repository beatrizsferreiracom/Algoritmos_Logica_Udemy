//Exercício - Pagamento

#include <stdio.h>
#include <string.h>

int main() {

    char nome [50];
    int horas;
    double valorPorHora, pagamento;

    printf("Nome: ");
    gets(nome);

    printf("Valor por hora: ");
    scanf("%lf", &valorPorHora);

    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valorPorHora * horas;

    printf("O pagamento para %s deve ser %.2lf", nome, pagamento);

    return 0;

}