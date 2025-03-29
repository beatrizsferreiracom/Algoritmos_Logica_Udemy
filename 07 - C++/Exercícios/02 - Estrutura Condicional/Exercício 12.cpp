//Exercício - Tempo de Jogo

#include <iostream>

using namespace std;

int main() {

    int horaInicial, horaFinal, duracao;

    cout << "Hora inicial: ";
    cin >> horaInicial;
    
    cout << "Hora final: ";
    cin >> horaFinal;

    if(horaInicial < horaFinal){
        duracao = horaFinal - horaInicial;
    }
    else{
        duracao = (24 - horaInicial) + horaFinal;
    }

    cout << "O jogo durou " << duracao << " hora(s)" << endl;

    return 0;

}