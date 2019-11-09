#include <iostream>
#include <vector>
#include <algorithm>
#include "q3funcionario.h"

using namespace std;

bool compararPorSalario(Funcionario a, Funcionario b);

int main(){
    vector<Funcionario> lista;
    char continuar;

    do{
        string temp1;
        double temp2;

        cout << "Insira o nome: ";
        getline(cin, temp1);

        cout << "Insira o salário: ";
        cin >> temp2;

        Funcionario temp_funcionario(temp1, temp2);

        lista.push_back(temp_funcionario);

        cout << "Deseja inserir outro? (s) ";
        cin >> continuar;
        cin.ignore();
    }while(continuar=='s');

    sort(lista.begin(), lista.end(), compararPorSalario);

    cout << "------------\n";
    cout << "Nome: Salario\n";

    for(auto& elemento : lista){
        cout << "\t" << elemento.getNome() << ": " << elemento.getSalario() << endl;
    }

    return 0;
}

bool compararPorSalario(Funcionario a, Funcionario b){
    return a.getSalario() > b.getSalario();
}