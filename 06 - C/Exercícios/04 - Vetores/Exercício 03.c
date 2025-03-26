//Exercício - Alturas

#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");    
}

int main(){

    int i, N, menor;
    double soma, media, porc;

    soma = 0;
    menor = 0;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];


    for(i = 0; i < N; i++){

        printf("\nDados da %da pessoa:\n", i+1);
        printf("Nome: ");
        limpar_entrada();
        ler_texto(nome[i], 50);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);

        soma = soma + altura[i];

        if(idade[i] < 16){
            menor = menor + 1;
        }
    }

    media = (double) soma / N;
    porc = (double) menor / N * 100;
    
    printf("\nAltura media: %.2lf", media);
    printf("\nPessoas com menos de 16 anos: %.1lf%%\n", porc);
    
    for(i = 0; i < N; i++){
        if(idade[i] < 16){
            printf("%s\n", nome[i]);
        }
    }

    return 0;

}