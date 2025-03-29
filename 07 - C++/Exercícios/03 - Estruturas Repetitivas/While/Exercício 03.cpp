//Exercício - Senha Fixa

#include <iostream>
#include <string>

using namespace std;

int main(){

    string senha;

    cout << "Digite a senha: ";
    cin >> senha;

    while(senha != "2002"){
       
        cout << "Senha Invalida! Tente novamente: ";
        cin >> senha;
    }

    cout << "Acesso permitido!";
    
    return 0;
}