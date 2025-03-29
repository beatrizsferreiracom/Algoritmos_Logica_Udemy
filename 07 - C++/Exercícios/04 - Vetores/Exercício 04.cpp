//Exercício - Números Pares

#include <iostream>

using namespace std;

int main(){

    int i, N, pares;

    pares = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int vet[N];

    for(i = 0; i < N; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << endl << "Numeros Pares:" << endl;

    for(i = 0; i < N; i++){

        if(vet[i] % 2 == 0){
            cout << vet[i] << " ";
            pares++;
        }
    }

    cout << endl << endl << "Quantidade de pares = " << pares;

    return 0;

}