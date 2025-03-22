//Exercício - Tempo de Jogo

#include <stdio.h>

int main() {

    int horaInicial, horaFinal, duracao;

    printf("Hora inicial: ");
    scanf("%d", &horaInicial);
    
    printf("Hora final: ");
    scanf("%d", &horaFinal);

    if(horaInicial < horaFinal){
        duracao = horaFinal - horaInicial;
    }
    else{
        duracao = (24 - horaInicial) + horaFinal;
    }

    printf("O jogo durou %d hora(s)", duracao);

    return 0;

}