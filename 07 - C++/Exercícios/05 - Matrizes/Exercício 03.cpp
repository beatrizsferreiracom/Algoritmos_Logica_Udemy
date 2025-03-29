//Exercício - Negativos Matriz

#include <iostream>

using namespace std;

int main(){

    int i, j, linha, coluna;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> linha;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> coluna;

    int mat[linha][coluna];

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            cout << "Elemento [" << i  << ", " << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << endl << "Valores negativos:" << endl;

    for(i = 0; i < linha; i++){
        for(j = 0; j < coluna; j++){
            if(mat[i][j] < 0){
                cout << mat[i][j] << endl;
            }
        }
    }

    return 0;

}