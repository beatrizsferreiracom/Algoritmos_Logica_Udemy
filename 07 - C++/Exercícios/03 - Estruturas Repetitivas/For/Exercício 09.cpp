//Exercício - Experiências

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int i, N, quant, R, C, S, total;
    char tipo;
    double pR, pC, pS;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> N;

    R = 0;
    C = 0;
    S = 0;

    for(i = 1; i <= N; i++){

        cout << "\nQuantidade de cobaias: ";
        cin >> quant;

        cout << "Tipo de cobaia: ";
        cin >> tipo;

        if(tipo == 'R'){
            R = R + quant;
        }
        else if(tipo == 'C'){
            C = C + quant;
        }
        else{
            S = S + quant;
        }
    }

    total = R + C + S;
      
    pR = (double) R / total * 100;
    pC = (double) C / total * 100;
    pS = (double) S / total * 100;

    cout << fixed << setprecision(2);

    cout << "\nRELATORIO FINAL" << endl;
    cout << "Total: " << total << endl;
    cout << "Total de coelhos: " << C << endl;
    cout << "Total de ratos: " << R << endl;
    cout << "Total de sapos: " << S << endl;
    cout << "Percentual de coelhos: " << pC << endl;
    cout << "Percentual de ratos: " << pR << endl;
    cout << "Percentual de sapos: " << pS << endl;

    return 0;
    
}