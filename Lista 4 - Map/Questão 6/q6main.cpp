#include "q6funcoes.h"

using namespace std;

int main(){
    string nome;
    map<string,string> catalogo;
    char continuar;
    int opcao;

    listarOpcoes();
    cin >> opcao;
    cin.ignore();

    while(opcao!=SAIR){
        if(opcao==INSERIR){
            catalogo = inserirEndereco(catalogo);
        }else{
            if (opcao==REMOVER){
                cout << "Quem você deseja remover? ";
                getline(cin, nome);
                catalogo.erase(nome);
                cout << "\nRemovido com sucesso!\n";
            }else{
                if (opcao==ALTERAR){
                    cout << "Insira o nome da pessoa a qual deseja alterar o endereço: ";
                    getline(cin, nome);

                    cout << "Insira o novo e-mail: ";
                    cin >> catalogo[nome];

                    cout << "\nAlterado com sucesso!\n";
                }else{
                    if (opcao==LISTAR){
                        cout << "\nLista de endereços de e-mail:\n\n";
                        for (auto elemento : catalogo){
                            cout << elemento.first << ": " << elemento.second << endl;
                        }
                    }
                }
            }
        }

        cout << "\n-----------------\n";
        cout << "O que deseja fazer agora?\n";
        listarOpcoes();
        cin >> opcao;
        cin.ignore();
    }

    return 0;
}