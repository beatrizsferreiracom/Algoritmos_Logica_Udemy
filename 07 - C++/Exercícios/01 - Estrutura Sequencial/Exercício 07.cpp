//Exercício - Pagamento

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {

    string nome;
    int horas;
    double valorPorHora, pagamento;

    cout << "Nome: ";
    getline(cin, nome);

    cout << "Valor por hora: ";
    cin >> valorPorHora;

    cout << "Horas trabalhadas: ";
    cin >> horas;

    pagamento = valorPorHora * horas;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << nome << " deve ser " << pagamento << endl;

    return 0;
    
}