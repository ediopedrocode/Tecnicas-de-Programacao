#include <iostream>
#include <map>

#define PRIORIDADE "prioridade"
#define RESPONSAVEL "responsável"

using namespace std;

int main(){
    string local;
    map< string, map<string,string> > dado;
    
    cout << "Insira o local: ";
    getline(cin, local);

    cout << "Insira o responsável: ";
    getline(cin, dado[local][RESPONSAVEL]);

    cout << "Insira a prioridade: ";
    getline(cin, dado[local][PRIORIDADE]);

    cout << "\n------------------\n";
    cout << "Local: " << local << endl;
    cout << "Responsável: " << dado[local][RESPONSAVEL] << endl;
    cout << "Prioridade: " << dado[local][PRIORIDADE] << endl;

    return 0;
}