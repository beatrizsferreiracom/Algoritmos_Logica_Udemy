//Exercício - Alturas

#include <iostream>
#include <iomanip>
#include <climits>
#include <string>

using namespace std;

int main(){

    int i, N, menor;
    double soma, media, porc;

    soma = 0;
    menor = 0;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    string nome[N];
    int idade[N];
    double altura[N];


    for(i = 0; i < N; i++){

        cout << "\nDados da " << i+1 << "a pessoa:\n";
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];

        soma = soma + altura[i];

        if(idade[i] < 16){
            menor = menor + 1;
        }
    }

    media = (double) soma / N;
    porc = (double) menor / N * 100;
    
    cout << fixed << setprecision(2);
    cout << "\nAltura media: " << media << endl;
    cout << "Pessoas com menos de 16 anos: " << porc << "%" << endl;
    
    for(i = 0; i < N; i++){
        if(idade[i] < 16){
            cout << nome[i] << endl;
        }
    }

    return 0;

}