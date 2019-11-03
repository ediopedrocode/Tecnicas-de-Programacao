#include "q6funcoes.h"

using namespace std;

string n; // será usado como nome nas funções manipuladoras da lista de endereços

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

    cout << "Insira um nome: ";
    getline(cin, n);

    cout << "Insira um e-mail: ";
    cin >> c[n];
            
    cout << "\n\t\tAdicionado com sucesso!\n";
    return c;
}

map<string,string> removerEndereco(map<string,string> c){

    cout << "Quem você deseja remover? ";
    getline(cin, n);

    c.erase(n);

    cout << "\n\t\tRemovido com sucesso!\n";
    return c;
}

map<string,string> alterarEndereco(map<string,string> c){

    cout << "Insira o nome da pessoa a qual deseja alterar o endereço: ";
    getline(cin, n);

    cout << "Insira o novo e-mail: ";
    cin >> c[n];

    cout << "\n\t\tAlterado com sucesso!\n";
    return c;
}

void listarEndereco(map<string,string> c){
    
    cout << "\nLista de endereços de e-mail:\n\n";

    if (c.empty()){
        cout << "\t\tlista vazia.\n";
    }else{
        for (auto elemento : c){
        cout << "\t\t" << elemento.first << ": " << elemento.second << endl;
        }
    }
}