//Exercício - Soma Vetor

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, N;
    double soma, media;

    soma = 0;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for(i = 0; i < N; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];

        soma = soma + vet[i];
    }

    media = soma / N;

    cout << fixed << setprecision(1);
    cout << "\nValores = ";

    for(i = 0; i < N; i++){
        cout << vet[i] << " | ";
    }

    cout << fixed << setprecision(2);
    cout << "\nSoma = " << soma << endl;
    cout << "Media = " << media << endl;

    return 0;

}