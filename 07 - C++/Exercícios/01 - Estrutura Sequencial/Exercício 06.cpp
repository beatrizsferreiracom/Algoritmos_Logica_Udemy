//Exercício - Circulo

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double raio, area, pi = 3.14159;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = pi * pow(raio, 2.0);

    cout << fixed << setprecision(3);
    cout << "Area = " << area << endl;

    return 0;
    
}