//Exercício - Abaixo da Média

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, N;
    double soma, media;

    soma = 0;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    double vet[N];

    for(i = 0; i < N; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];

        soma = soma + vet[i];
    }

    media = soma / N;
    
    cout << fixed << setprecision(3);
    cout << endl << "Media do vetor = " << media << endl;

    cout << fixed << setprecision(1);
    cout << "Elementos abaixo da media:" << endl;
    for(i = 0; i < N; i++){
        if(vet[i] < media){
            cout << vet[i] << endl;
        }
    }

    return 0;

}