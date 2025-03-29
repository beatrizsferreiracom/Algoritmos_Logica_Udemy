//Exercício - Dados Pessoas

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, N, homem, mulher;
    double media, soma, menor, maior;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> N;

    double altura[N];
    char genero[N];

    soma = 0;
    homem = 0;
    mulher = 0;

    for(i = 0; i < N; i++){

        cout << endl << "Altura da " << i+1 << "a pessoa: ";
        cin >> altura[i];
		cout << "Genero da " << i+1 << "a pessoa: ";
        cin >> genero[i];

        if(genero[i] == 'M' || genero[i] == 'm'){
            homem++;
        }
        else{
            mulher++;
            soma = soma + altura[i];
        }
    }

    media = (double) soma / mulher;

    menor = altura[0];
    maior = altura[0];

    for(i = 0; i < N; i++){

        if(menor > altura[i]){
            menor = altura[i];
        }

        if (maior < altura[i]){
            maior = altura[i];
        }

    }

    cout << fixed << setprecision(2);
    cout << endl << "Menor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;
    cout << "Media das alturas das mulheres = " << media << endl;
    cout << "Numero de homens = " << homem;
    
    return 0;

}