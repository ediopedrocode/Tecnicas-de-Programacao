#include "q6funcoes.h"

using namespace std;

void listarOpcoes(){
    cout << "Opções:\n";
    cout << INSERIR << " - Inserir um novo endereço.\n";
    cout << REMOVER << " - Remover um endereço.\n";
    cout << ALTERAR << " - Alterar um endereço.\n";
    cout << LISTAR << " - Listar os endereços.\n";
    cout << SAIR << " - SAIR.\n";
    cout << "Insira o número da opção: ";
}

map<string,string> inserirEndereco(map<string,string> c){
    string n;

    cout << "Insira um nome: ";
    getline(cin, n);

    cout << "Insira um e-mail: ";
    cin >> c[n];
            
    cout << "\nAdicionado com sucesso!\n";
    return c[n];
}