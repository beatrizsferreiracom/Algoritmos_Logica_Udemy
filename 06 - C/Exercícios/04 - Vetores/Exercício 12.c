//Exercício - Comerciante

#include <stdio.h>
#include <string.h>

int main(){

    int i, N, abaixo, entre, acima;
    double porc, lucro, totalCompra, totalVenda, totalLucro;

    printf("Serao digitados dados de quantos produtos? ");
    scanf("%d", &N);

    char nome[N][50];
    double precoCompra[N], precoVenda[N];

    totalCompra = 0;
    totalVenda = 0;

    for(i = 0; i < N; i++){

        printf("\nProduto %d:\n", i+1);
        printf("Nome: ");
		scanf("%s", &nome[i][0]);
        printf("Preco de compra: ");
        scanf("%lf", &precoCompra[i]);
        printf("Preco de venda: ");
        scanf("%lf", &precoVenda[i]);

        totalCompra = totalCompra + precoCompra[i];
        totalVenda = totalVenda + precoVenda[i];
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for(i = 0; i < N; i++){

        lucro = (double) precoVenda[i] - precoCompra[i];
        porc = lucro * 100.0 / precoCompra[i];

        if(porc < 10.0){
            abaixo++;
        }
        else if(porc < 20){
            entre++;
        }
        else{
            acima++;
        }
    }

    totalLucro = totalVenda - totalCompra;

    printf("\nRELATORIO:\n");
	printf("Lucro abaixo de 10%%: %d\n", abaixo);
	printf("Lucro entre 10%% e 20%%: %d\n", entre);
	printf("Lucro acima de 20%%: %d\n", acima);
    printf("Valor total de compra: %.2lf\n", totalCompra);
    printf("Valor total de venda: %.2lf\n", totalVenda);
    printf("Lucro total: %.2lf\n", totalLucro);
    
    return 0;

}