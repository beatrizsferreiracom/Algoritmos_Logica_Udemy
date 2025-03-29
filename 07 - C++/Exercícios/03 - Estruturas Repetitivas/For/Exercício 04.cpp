//Exercício - Dentro Fora

#include <iostream>

using namespace std;

int main(){

    int i, N, x, dentro, fora;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    dentro = 0;
    fora = 0;

    for(i = 1; i <= N; i++){

        cout << "Digite um numero: ";
        cin >> x;

        if(x < 10 || x > 20){
            fora = fora + 1;
        }
        else{
            dentro = dentro + 1;
        }
    }

    cout << dentro << " dentro" << endl;
    cout << fora << " fora" << endl;

    return 0;

}