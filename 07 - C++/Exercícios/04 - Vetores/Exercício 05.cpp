//Exercício - Maior Posição

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, N, posicao;
    double maior;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    double vet[N];

    for(i = 0; i < N; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    maior = vet[0];
    posicao = 0;

    for(i = 0; i < N; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "Maior valor = " << maior << endl;
    cout << "Posicao do maior valor = " << posicao << endl;

    return 0;

}