//Exercício - Menor de Três

#include <iostream>

using namespace std;

int main() {

    int a, b, c, menor;

    cout << "Coeficiente a: ";
    cin >> a;

    cout << "Coeficiente b: ";
    cin >> b;

    cout << "Coeficiente c: ";
    cin >> c;

    if (a < b && a < c){
        menor = a;
    }
    else if (b < c){
        menor = b;
    }
    else{
        menor = c;
    }

    cout << "Menor = " << menor << endl;

    return 0;

}