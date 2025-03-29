//Exercício - Soma Linhas

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, j, linha, coluna;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> linha;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> coluna;

    double mat[linha][coluna], vet[linha];

    for(i = 0; i < linha; i++){
        cout << endl << "Digite os elementos da " << i+1 << "a linha: " << endl;
        for(j = 0; j < coluna; j++){
            cin >> mat[i][j];
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "Vetor gerado:" << endl;

    for(i = 0; i < linha; i++){
        vet[i] = 0;
        for(j = 0; j < coluna; j++){
            vet[i] = vet[i] + mat[i][j];
        }
        cout << vet[i] << endl;
    }

    return 0;

}