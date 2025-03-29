//Exercício - Par ímpar

#include <iostream>

using namespace std;

int main(){

    int i, N, x;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> N;

    for(i = 1; i <= N; i++){

        cout << "Digite um numero: ";
        cin >> x;

        if(x == 0){
            cout << "Nulo\n" << endl;
        }
        else if(x % 2 == 0){
            if(x > 0){
                cout << "Par positivo\n" << endl;
            }
            else{
                cout << "Par negativo\n" << endl;
            }
        }
        else{
            if(x > 0){
                cout << "Impar positivo\n" << endl;
            }
            else{
                cout << "Impar negativo\n" << endl;
            }
        }
    }

    return 0;

}