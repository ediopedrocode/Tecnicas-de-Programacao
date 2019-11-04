#include <iostream>
#include <map>
#include <vector>

#define LOCAL "local"
#define PRIORIDADE "prioridade"
#define RESPONSAVEL "responsável"

using namespace std;

int main(){
    string local;
    map< string, string > dados;
    vector< map< string, string>> lista;
    string continuar;

    do{
        cout << "Insira o local: ";
        getline(cin, dados[LOCAL]);

        cout << "Insira a prioridade: ";
        getline(cin, dados[PRIORIDADE]);

        cout << "Insira o responsável: ";
        getline(cin, dados[RESPONSAVEL]);

        lista.push_back(dados);

        cout << "Se deseja continuar, digite 'sim': ";
        cin >> continuar;
        cin.ignore();
    }while(continuar == "sim");

    for(int i=0; i<lista.size(); i++){
        cout << "\n--------------\n";
        cout << "\nLocal: " << lista[i][LOCAL] <<  endl;
        cout << "\nPrioridade: " << lista[i][PRIORIDADE] << endl;
        cout << "\nResponsável: " << lista[i][RESPONSAVEL] << endl;
    }

    return 0;
}