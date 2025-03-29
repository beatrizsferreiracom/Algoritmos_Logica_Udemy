//Exercício - Tabuada

#include <iostream>

using namespace std;

int main(){

    int i, numero, multi;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> numero;

    for(i = 1; i <= 10; i++){

        multi = i * numero;

        cout << numero << " x " << i << " = "<< multi << endl;
    }

    return 0;

}