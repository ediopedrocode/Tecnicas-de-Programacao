#include <iostream>
#include <map>

#define PRIORIDADE "prioridade"
#define RESPONSAVEL "responsável"

using namespace std;

int main(){
    string local;
    map< string, map<string,string> > dados;
    string continuar;

    do{
        cout << "Insira o local: ";
        getline(cin, local);

        cout << "Insira o responsável: ";
        getline(cin, dados[local][RESPONSAVEL]);

        cout << "Insira a prioridade: ";
        getline(cin, dados[local][PRIORIDADE]);

        cout << "Se deseja continuar, digite 'sim': ";
        cin >> continuar;
        cin.ignore();
    }while(continuar == "sim");

    for (auto elemento : dados){
        cout << "\n------------------\n";
        cout << "Local: " << elemento.first << endl;
        cout << "Responsável: " << elemento.second[RESPONSAVEL] << endl;
        cout << "Prioridade: " << elemento.second[PRIORIDADE] << endl;
    }

    return 0;
}