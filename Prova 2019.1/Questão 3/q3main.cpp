#include <iostream>
#include <map>

using namespace std;

int main(){
    map <string, string> nome_completo;
    string sobrenome;
    string nome;
    char opcao; 

    do{
        cout << "\nInsira um nome: ";
        cin >> nome;

        cout << "Insira um sobrenome: ";
        cin >> sobrenome;

        if (nome_completo.find(sobrenome)!=nome_completo.end()){
            cout << "\nUm nome já foi cadastrado com esse sobrenome!"<< endl;
            cout << "Se você não quiser mudar, o nome já cadastrado será sobrescrito!\n" << "Deseja mudar? (s/n) ";
            cin >> opcao;
            cin.ignore();

            if(opcao=='s'){
            cout << "Novo sobrenome: ";
            cin >> sobrenome;
            
            while(nome_completo.find(sobrenome)!=nome_completo.end()){
                cout << "Este sobrenome também não pode ser cadastrado!\nTente novamente: ";
                cin >> sobrenome;
            }

            cout << "Sobrenome alterado com sucesso!" << endl;
            }
        }

        nome_completo[sobrenome] = nome;
        
        cout << "\n-----------------\n";
        cout << "Deseja inserir um novo nome completo? (s/n) ";
        cin >> opcao;
    }while(opcao=='s');

    cout <<"\n-------------\n";
    cout << "Cadastros realizados:\n";

    for (auto elemento : nome_completo){
        cout << elemento.first << ", " << elemento.second << endl;
    }

    return 0;
}