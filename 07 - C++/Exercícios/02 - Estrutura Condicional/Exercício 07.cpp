//Exercício - Dardo

#include <iostream>

using namespace std;

int main() {

    double a, b, c, maior;

    cout << "Digite as tres distancias:\n";
    cin >> a;
    cin >> b;
    cin >> c;

    if (a > b && a > c){
        maior = a;
    }
    else if(b > c){
        maior = b;
    }
    else{
        maior = c;
    }

    cout << "Maior distancia = " << maior << endl;

    return 0;

}