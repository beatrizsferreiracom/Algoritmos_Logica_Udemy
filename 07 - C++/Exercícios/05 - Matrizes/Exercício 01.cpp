//Exercício - Diagonal Negativos

#include <iostream>

using namespace std;

int main(){

    int i, j, ordem, negativos = 0;

    cout << "Qual a ordem da matriz? ";
    cin >> ordem;

    int mat[ordem][ordem];

    for(i = 0; i < ordem; i++){
        for(j = 0; j < ordem; j++){
            cout << "Elemento [" << i  << ", " << j << "]: ";
            cin >> mat[i][j];

            if(mat[i][j] < 0){
                negativos++;
            }
        }
    }

    cout << endl << "Diagonal principal:" << endl;

    for(i = 0; i < ordem; i++){
        cout << mat[i][i] << " ";
    }

    cout << endl << "Quantidade de negativos = " << negativos;

    return 0;

}