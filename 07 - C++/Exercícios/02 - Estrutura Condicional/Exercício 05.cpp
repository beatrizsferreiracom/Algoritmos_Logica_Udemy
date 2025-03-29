//Exercício - Troco Verificado

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

    troco = dinheiro - (preco * quantidade);

    cout << fixed << setprecision(2);

    if (troco >= 0){
        cout << "Troco = R$" << troco << endl;
    }
    else{
        troco = abs(troco);
        cout << "Dinheiro insuficiente. Faltam R$" << troco << endl;
    } 

    return 0;

}