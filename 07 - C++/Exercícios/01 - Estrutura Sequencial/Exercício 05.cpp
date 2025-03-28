//Exercício - Troco

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    int quantidade;
    double preco, dinheiro, troco;

    cout << "Preco unitario do produto: ";
    cin >> preco;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    troco = dinheiro - (quantidade * preco);

    cout << fixed << setprecision(2);

    cout << "Troco = " << troco << endl;

    return 0;
    
}