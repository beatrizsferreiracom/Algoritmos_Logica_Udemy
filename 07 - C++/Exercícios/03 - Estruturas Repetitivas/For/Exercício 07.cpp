//Exercício - Divisão

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, N;
    double x, y, divisao;

    cout << "Quantos casos voce vai digitar? ";
    cin >> N;

    for(i = 1; i <= N; i++){

        cout << "\nEntre com o numerador: ";
        cin >> x;

        cout << "Entre com o denominador: ";
        cin >> y;

        cout << fixed << setprecision(2);

        if(y != 0){
            divisao = (double) x / y;
            cout << "Divisao = " << divisao << endl;
        }
        else{
            cout << "Divisao impossivel" << endl;
        }
    }

    return 0;
    
}