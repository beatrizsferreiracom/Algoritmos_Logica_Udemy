//Exercício - Comerciante

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main(){

    int i, N, abaixo, entre, acima;
    double porc, lucro, totalCompra, totalVenda, totalLucro;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> N;

    string nome[N];
    double precoCompra[N], precoVenda[N];

    totalCompra = 0;
    totalVenda = 0;

    for(i = 0; i < N; i++){

        cout << endl << "Produto " << i+1 << ":" << endl;
        cout << "Nome: ";
		cin >> nome[i];
        cout << "Preco de compra: ";
        cin >> precoCompra[i];
        cout << "Preco de venda: ";
        cin >> precoVenda[i];

        totalCompra = totalCompra + precoCompra[i];
        totalVenda = totalVenda + precoVenda[i];
    }

    abaixo = 0;
    entre = 0;
    acima = 0;

    for(i = 0; i < N; i++){

        lucro = (double) precoVenda[i] - precoCompra[i];
        porc = lucro * 100.0 / precoCompra[i];

        if(porc < 10.0){
            abaixo++;
        }
        else if(porc < 20){
            entre++;
        }
        else{
            acima++;
        }
    }

    totalLucro = totalVenda - totalCompra;

    cout << fixed << setprecision(2);
    cout << endl << "RELATORIO:" << endl;
	cout << "Lucro abaixo de 10%: " << abaixo << endl;
	cout << "Lucro entre 10% e 20%: " << entre << endl;
	cout << "Lucro acima de 20%: " << acima << endl;
    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor total de venda: " << totalVenda << endl;
    cout << "Lucro total: " << totalLucro << endl;
    
    return 0;

}