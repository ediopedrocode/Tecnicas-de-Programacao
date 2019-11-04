#include <iostream>
#include <map>
#include <algorithm>

#define QUANTIDADE "quantidade"
#define PRECO "preço"

using namespace std;

bool compararPreco(pair<string, map<string, float>> a, pair<string, map<string, float>> b);

int main(){
    string produto;
    map<string, map<string, float> > lista;
    map<string, map<string, float> >::iterator it;
    char continuar;
    float total;
    
    do{
        cout << "\nInsira o nome do produto: ";
        getline(cin, produto);

        cout << "Insira a quantidade: ";
        cin >> lista[produto][QUANTIDADE];

        cout << "Insira o preço: ";
        cin >> lista[produto][PRECO];

        cout << "Se deseja continuar, digite 's': ";
        cin >> continuar;
        cin.ignore();
    }while(continuar=='s');

    for(auto& elemento : lista){
        total += elemento.second[QUANTIDADE]*elemento.second[PRECO];
    }

    cout << "\n-----------------\n" << endl;
    cout << "Valor total: " << total << " reais" << endl;
    cout << "Media de preços: " << total/lista.size() << " reais/produto" << endl;

    it = max_element(lista.begin(), lista.end(), compararPreco); //mais caro
    cout << "Produto mais caro: " << it->first << endl;

    it = min_element(lista.begin(), lista.end(), compararPreco); //mais barato
    cout << "Produto mais barato: " << it->first << endl;

    return 0;
}

bool compararPreco(pair<string, map<string, float>> a, pair<string, map<string, float>> b){
    return a.second[PRECO] < b.second[PRECO];
}