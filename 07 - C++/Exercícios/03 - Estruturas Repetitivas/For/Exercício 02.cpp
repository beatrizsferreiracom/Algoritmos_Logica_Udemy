//Exercício - Soma ímpares

#include <iostream>

using namespace std;

int main(){

    int i, x, y, soma, troca;

    cout << "Digite dois numeros:\n";
    cin >> x;
    cin >> y;

    if(x > y){
        troca = x;
        x = y;
        y = troca;
    }

    soma = 0;

    for(i = x+1; i <= y-1; i++){

        if(i % 2 != 0){
            soma = soma + i;
        }
    }

    cout << "Soma dos impares = " << soma << endl;

    return 0;

}