//Exercício - Cada Linha

#include <iostream>

using namespace std;

int main() {

    int i, j, ordem, maior;

    cout << "Qual a ordem da matriz? ";
    cin >> ordem;

    int mat[ordem][ordem];

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            cout << "Elemento [" << i  << ", " << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << endl << "Maior elemento de cada linha:" << endl;

    for(i = 0; i < ordem; i++) {
        maior = mat[i][0];
        for(j = 1; j < ordem; j++) {
            if(mat[i][j] > maior) {
                maior = mat[i][j];
            }
        }
        cout << maior << endl;
    }

    return 0;
}
