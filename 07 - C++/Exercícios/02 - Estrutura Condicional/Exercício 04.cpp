//Exercício - Operadora

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int minutos;
    double planoBasico, excedente;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    planoBasico = 50;

    cout << fixed << setprecision(2);

    if (minutos <= 100){
        cout << "Valor a pagar: " << planoBasico << endl;
    }
    else{
        excedente = planoBasico + 2 * (minutos - 100);
        cout << "Valor a pagar: R$" << excedente << endl;
    }

    return 0;

}