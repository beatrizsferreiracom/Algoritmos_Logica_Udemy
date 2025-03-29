//Exercício - Acima Diagonal

#include <iostream>

using namespace std;

int main() {

    int i, j, ordem, soma;

    cout << "Qual a ordem da matriz? ";
    cin >> ordem;

    int mat[ordem][ordem];

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            cout << "Elemento [" << i  << ", " << j << "]: ";
            cin >> mat[i][j];
        }
    }

    soma = 0;

    for(i = 0; i < ordem; i++) {
        for(j = i+1; j < ordem; j++) {
            soma = soma  + mat[i][j];
        }
    }

    cout << endl << "Soma dos elementos acima da diagonal principal = " << soma;

    return 0;
}
