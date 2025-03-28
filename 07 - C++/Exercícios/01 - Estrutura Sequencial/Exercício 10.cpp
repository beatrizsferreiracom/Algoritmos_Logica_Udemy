//Exercício - Duração

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int duracao, horas, resto, minutos, segundos;

    cout << "Digite a duracao em segundos: ";
    cin >> duracao;

    horas = duracao / 3600;
    resto = duracao % 3600;
      
    minutos = resto / 60;
    segundos = resto % 60;

    cout << "Duracao Total = " << horas << ":" << minutos << ":" << segundos << endl;

    return 0;

}