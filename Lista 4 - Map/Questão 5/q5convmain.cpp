#include <iostream>
#include <map>
#include <vector>

#define PRIORIDADE "prioridade"
#define RESPONSAVEL "responsável"

using namespace std;

int main(){
    string local;
    map< string, map<string,string> > dado;
    vector< map< string, map<string,string> > > dados;
    string continuar;
    
    do{
        cout << "Insira o local: ";
        getline(cin, local);

        cout << "Insira o responsável: ";
        getline(cin, dado[local][RESPONSAVEL]);

        cout << "Insira a prioridade: ";
        getline(cin, dado[local][PRIORIDADE]);

        dados.push_back(dado);

        dado.clear();

        cout << "Se deseja continuar, digite 'sim': ";
        cin >> continuar;
        cin.ignore();
    }while(continuar=="sim");

    for (int i=0; i<dados.size(); i++){
        cout << "\n------------------\n";
        
        for(auto& elemento : dados[i]){
            cout << "Local: " << elemento.first << endl;
            cout << "Responsável: " << elemento.second[RESPONSAVEL] << endl;
            cout << "Prioridade: " << elemento.second[PRIORIDADE] << endl;
        }
    }
    return 0;
}