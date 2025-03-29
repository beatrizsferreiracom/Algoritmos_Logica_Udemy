//Exercício - Matriz Geral

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {

    int i, j, ordem, linha, coluna;
    double soma;

    cout << "Qual a ordem da matriz? ";
    cin >> ordem;

    double mat[ordem][ordem];

    soma = 0;

    for(i = 0; i < ordem; i++) {
        for(j = 0; j < ordem; j++) {
            cout << "Elemento [" << i  << ", " << j << "]: ";
            cin >> mat[i][j];

            if(mat[i][j] > 0){
                soma = soma + mat[i][j];
            }
        }
    }

    cout << fixed << setprecision(1);
    cout << endl << "Soma dos positivos = " << soma << endl;

    cout << endl << "Escolha uma linha: ";
    cin >> linha;

    cout << "Linha escolhida: ";
    for(j = 0; j < ordem; j++){
        cout << mat[linha][j] << " ";
    }

    cout << endl << endl << "Escolha uma coluna: ";
    cin >> coluna;

    cout << "Coluna escolhida: ";
    for(i = 0; i < ordem; i++){
        cout << mat[i][coluna] << " ";
    }

    cout << endl << endl <<  "Diagonal principal: ";
    for(i = 0; i < ordem; i++){
        cout << mat[i][i] << " ";
    }

    cout << endl << endl << "Matriz alterada:" << endl;
    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            if(mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j], 2);
            }
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
    
}
