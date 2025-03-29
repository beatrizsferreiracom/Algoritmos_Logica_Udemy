//Exercício - Quadrante

#include <iostream>

using namespace std;

int main() {

    double x, y;

    cout << "Digite os valores das coordenadas X e Y:\n";
    cin >> x;
    cin >> y;

    while (x != 0 && y != 0){
        
        if(x > 0 && y > 0){
            cout << "Quadrante Q1\n";
        }
        else if(x < 0 && y > 0){
            cout << "Quadrante Q2\n";
        }
        else if(x < 0 && y < 0){
            cout << "Quadrante Q3\n";
        }
        else{
            cout << "Quadrante Q4\n";
        }

        cout << "Digite os valores das coordenadas X e Y:\n";
        cin >> x;
        cin >> y;
    
    }
    
    return 0;

}