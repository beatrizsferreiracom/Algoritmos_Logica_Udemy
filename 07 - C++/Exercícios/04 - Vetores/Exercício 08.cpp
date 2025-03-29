//Exercício - Média Pares

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, N, pares;
    double soma, media;

    soma = 0;
    pares = 0;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> N;

    int vet[N];

    for(i = 0; i < N; i++){

        cout << "Digite um numero: ";
        cin >> vet[i];

        if(vet[i] % 2 == 0){
            soma = soma + vet[i];
            pares++;
        }
    }

    cout << fixed << setprecision(1);

    if(pares == 0){
        cout << "Nenhum numero par";
    }
    else{
        media = (double) soma / pares;
        cout << "Media dos pares = " << media;
    }
    
    return 0;

}