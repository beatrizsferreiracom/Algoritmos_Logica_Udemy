//Exercício - Medidas

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double A, B, C, areaQuadrado, areaTriangulo, areaTrapezio;

    cout << "Digite a medida A: ";
    cin >> A;

    cout << "Digite a medida B: ";
    cin >> B;

    cout << "Digite a medida C: ";
    cin >> C;

    areaQuadrado = pow(A, 2.0);
    areaTriangulo = (A * B) / 2.0;
    areaTrapezio = (A + B) * C / 2.0;

    cout << fixed << setprecision(4);
    cout << "\nArea do quadrado = " << areaQuadrado << endl;
    cout << "Area do triangulo = " << areaTriangulo << endl;
    cout << "Area do trapezio = " << areaTrapezio << endl;

    return 0;
    
}