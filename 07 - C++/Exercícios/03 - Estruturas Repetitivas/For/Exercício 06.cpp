//Exercício - Média Ponderada

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, N;
    double a, b, c, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    for(i = 1; i <= N; i++){

        cout << "Digite tres numeros:\n";
        cin >> a;
        cin >> b;
        cin >> c;

        media = (a * 2 + b * 3 + c * 5) / 10.0;

        cout << fixed << setprecision(1);
        cout << "Media = " << media << "\n" << endl;
    }

    return 0;
    
}