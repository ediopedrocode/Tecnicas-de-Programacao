#include <iostream>
#include <map>

using namespace std;

int main(){
    string nome;
    map<string,string> lista;

    cout << "\nDigite um nome: ";
    getline(cin, nome);
    
    while(nome!="sair"){
        if (lista.find(nome)!=lista.end()){
            cout << "\nNúmero: " << lista[nome] << endl;
        }else{
            cout << "Insira o número: ";
            getline(cin, lista[nome]);
        }
        cout << "\nDigite um nome: ";
        getline(cin, nome);
    }
    for(auto elemento : lista){
        cout << endl << elemento.first << " - " << elemento.second << endl; 
    }
    return 0;
}