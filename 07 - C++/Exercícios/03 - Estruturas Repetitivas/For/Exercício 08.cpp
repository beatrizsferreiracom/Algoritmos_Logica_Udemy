//Exercício - Fatorial

#include <iostream>

using namespace std;

int main(){

    int i, N, fatorial;

    cout << "Digite o valor de N: ";
    cin >> N;

    fatorial = 1;

    for(i = 1; i <= N; i++){

        fatorial = fatorial * i;

    }

    cout << "Fatorial = " << fatorial << endl;

    return 0;
    
}