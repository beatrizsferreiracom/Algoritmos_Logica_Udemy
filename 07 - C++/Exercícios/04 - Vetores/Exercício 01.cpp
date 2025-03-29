//Exercício - Negativos

#include <iostream>

using namespace std;

int main(){

    int i, N;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    int vet[N];

    for(i = 0; i < N; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << "\nNumeros negativos:" << endl;

    for(i = 0; i < N; i++){

        if(vet[i] < 0){
            cout << vet[i] << endl;
        }
    }

    return 0;

}