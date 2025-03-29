//Exercício - Mais Velho

#include <iostream>
#include <string.h>
#include <climits>

using namespace std;

int main(){

    int i, N, maisVelho, posicao;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> N;

    string nome[N];
    int idade[N];

    for(i = 0; i < N; i++){

        cout << endl << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
		cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
    }

    maisVelho = idade[0];
    posicao = 0;

    for(i = 0; i < N; i++){

        if(idade[i] > maisVelho){
            maisVelho = idade[i];
            posicao = i;
        }
    }
    
    cout << endl << "Pessoa mais velha: " << nome[posicao];
    
    return 0;

}