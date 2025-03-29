//Exercício - Lanchonete

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int codigo, quant;
    double valor;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;

    cout << "Quantidade comprada: ";
    cin >> quant;

    switch (codigo){
        case 1:
            valor = 5.0 * quant;
            break;
        case 2:
            valor = 3.5 * quant;
            break;
        case 3:
            valor = 4.8 * quant;
            break;
        case 4:
            valor = 8.9 * quant;
            break;
        case 5:
            valor = 7.32 * quant;
            break;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$" << valor << endl;

    return 0;

}