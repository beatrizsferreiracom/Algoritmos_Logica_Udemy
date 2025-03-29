//Exercício - Media Idades

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int idade, soma, contador;
    double media;

    cout << "Digite as idades:\n";
    cin >> idade;

    soma = 0;
    contador = 0;

    while(idade >= 0){
       
        soma = soma + idade;
        contador = contador + 1;

        cin >> idade;

    }

    cout << fixed << setprecision(2);

    if(contador == 0){
        cout << "Impossivel calcular";
    }
    else{
        media = (double) soma / contador;
        cout << "Media = " << media << endl;
    }
    
    return 0;
}