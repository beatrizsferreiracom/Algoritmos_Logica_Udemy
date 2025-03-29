//Exercício - Soma Matrizes

#include <iostream>

using namespace std;

int main(){

    int i, j, linha, coluna;

    cout << "Quantas linhas vai ter cada matriz? ";
    cin >> linha;
    cout << "Quantas colunas vai ter cada matriz? ";
    cin >> coluna;

    int A[linha][coluna], B[linha][coluna], C[linha][coluna];

    cout << endl << "Digite os valores da matriz A:" << endl;
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            cout << "Elemento [" << i  << ", " << j << "]: ";
            cin >> A[i][j];
        }
    }

    cout << endl << "Digite os valores da matriz B:" << endl;
    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            cout << "Elemento [" << i  << ", " << j << "]: ";
            cin >> B[i][j];
        }
    }

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << endl << "Matriz soma:";

    for(i = 0; i < linha; i++){
        cout << endl;
        for(j = 0; j < coluna; j++){
            cout << C[i][j] << " ";
        }
    }

    return 0;

}