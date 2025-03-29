//Exercício - Multiplos

#include <iostream>

using namespace std;

int main() {

    int a, b;

    cout << "Digite dois numeros inteiros:\n";
    cin >> a;
    cin >> b;

    if (a % b == 0 || b % a == 0){
        cout << "Sao multiplos";
    }
    else{
        cout << "Nao sao multiplos";
    }

    return 0;

}