//Exercício - Soma Vetores

#include <iostream>

using namespace std;

int main(){

    int i, N;

    cout << "Quantos valores vai ter cada vetor? ";
    cin >> N;

    int A[N], B[N], C[N];

    cout << endl << "Digite os valores do vetor A:" << endl;
    for(i = 0; i < N; i++){
        cin >> A[i];
    }

    cout << endl << "Digite os valores do vetor B:" << endl;
    for(i = 0; i < N; i++){
        cin >> B[i];
    }

    cout << endl << "Vetor resultante:" << endl;

    for(i = 0; i < N; i++){
        C[i] = A[i] + B[i];
        cout << C[i] << endl;
    }

    return 0;

}