#include <iostream>
#include <map>

#define LOCAL "local"
#define PRIORIDADE "prioridade"
#define RESPONSAVEL "responsável"

using namespace std;

int main(){
    string local;
    map< string, string > dado;
    
    cout << "Insira o local: ";
    getline(cin, dado[LOCAL]);

    cout << "Insira o responsável: ";
    getline(cin, dado[RESPONSAVEL]);

    cout << "Insira a prioridade: ";
    getline(cin, dado[PRIORIDADE]);

    cout << "\n------------------\n";
    cout << "Local: " << dado[LOCAL] << endl;
    cout << "Responsável: " << dado[RESPONSAVEL] << endl;
    cout << "Prioridade: " << dado[PRIORIDADE] << endl;

    return 0;
}
