//Exemplo 10 - Estrutura Para (For)

#include <iostream>

using namespace std;

int main() {

    int N, i, x, soma;

    cout << "Quantos numeros serao digitados? ";
    cin >> N;

    soma = 0;

    for (i = 1; i <= N; i++) {
        cout << "Digite um numero: ";
        cin >> x;
        
        soma = soma + x;
    }

    cout << "Soma = " << soma << endl;

    return 0;

}