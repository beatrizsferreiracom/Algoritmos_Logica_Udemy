//Exercício - Aprovados

#include <iostream>
#include <string.h>
#include <climits>

using namespace std;

int main(){

    int i, N;
    double media;

    cout << "Quantos alunos serao digitados? ";
    cin >> N;

    string nome[N];
    double nota1[N], nota2[N];

    for(i = 0; i < N; i++){

        cout << endl << "Digite nome, primeira e segunda nota do " << i+1 << "o aluno:" << endl;
		cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cin >> nota1[i];
        cin >> nota2[i];
    }

    cout << endl << "Alunos aprovados:" << endl;

    for(i = 0; i < N; i++){
    
        media = (nota1[i] + nota2[i]) / 2.0;

        if(media >= 6.0){
            cout << nome[i] << endl;
        }
    }
    
    return 0;

}