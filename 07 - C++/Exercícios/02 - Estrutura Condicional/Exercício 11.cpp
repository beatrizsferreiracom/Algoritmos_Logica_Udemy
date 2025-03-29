//Exercício - Aumento

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double salarioAtual, salarioFinal, aumento, porcentagem;

    cout << "Digite o salario da pessoa: ";
    cin >> salarioAtual;

    if (salarioAtual <= 1000){
        porcentagem = 20.0;
    }
    else if (salarioAtual <= 3000){
        porcentagem = 15.0;
    }
    else if (salarioAtual <= 8000){
        porcentagem = 10.0;
    }
    else{
        porcentagem = 5.0;
    }

    aumento = salarioAtual * (porcentagem / 100);
    salarioFinal = salarioAtual + aumento;

    cout << fixed << setprecision(2);
    cout << "Novo salario = R$" << salarioFinal << endl;
    cout << "Aumento = R$" << aumento << endl;
    cout << "Porcentagem = " << porcentagem << "%" << endl;

    return 0;

}