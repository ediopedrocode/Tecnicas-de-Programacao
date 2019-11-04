#include "q6.h"

using namespace std;

int main(){
    map<string,string> catalogo;
    int opcao;

    listarOpcoes();
    cin >> opcao;
    cin.ignore();

    while(opcao!=SAIR){
        switch(opcao){
            case INSERIR: inserirEndereco(catalogo); break;
            case REMOVER: removerEndereco(catalogo); break;
            case ALTERAR: alterarEndereco(catalogo); break;
            case LISTAR: listarEndereco(catalogo); break;
        }

        cout << "\n-----------------\n";
        cout << "O que deseja fazer agora?\n"; 
        listarOpcoes();
        cin >> opcao;
        cin.ignore();
    }

    return 0;
}