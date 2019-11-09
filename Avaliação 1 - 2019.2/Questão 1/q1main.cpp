#include <iostream>
#include <map>
#define QNTD 5 //quantidade de nomes completos a serem lidos

using namespace std;

int main(){
    string nome;
    string sobrenome;
    map< string, string > nome_completo;
    
    for (int i=0; i<QNTD; i++){
        cout << "Insira o nome: ";
        cin >> nome;

        cout << "Insira o sobrenome: ";
        cin >> sobrenome;
        nome_completo[sobrenome] = nome;
    }

    cout << "------------\n";
    for (auto& elemento : nome_completo){
        cout << elemento.second << " " << elemento.first << endl;
    }
    
    return 0;
}