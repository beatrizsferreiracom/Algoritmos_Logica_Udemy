//Exercício - Experiências

#include <stdio.h>
#include <string.h>

int main(){

    int i, N, quant, R, C, S, total;
    char tipo;
    double pR, pC, pS;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &N);

    R = 0;
    C = 0;
    S = 0;

    for(i = 1; i <= N; i++){

        printf("\nQuantidade de cobaias: ");
        scanf("%d", &quant);

        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        if(tipo == 'R'){
            R = R + quant;
        }
        else if(tipo == 'C'){
            C = C + quant;
        }
        else{
            S = S + quant;
        }
    }

    total = R + C + S;
      
    pR = (double) R / total * 100;
    pC = (double) C / total * 100;
    pS = (double) S / total * 100;

    printf("\nRELATORIO FINAL\n");
    printf("Total: %d\n", total);
    printf("Total de coelhos: %d\n", C);
    printf("Total de ratos: %d\n", R);
    printf("Total de sapos: %d\n", S);
    printf("Percentual de coelhos: %.2lf\n", pC);
    printf("Percentual de ratos: %.2lf\n", pR);
    printf("Percentual de sapos: %.2lf\n", pS);

    return 0;
    
}