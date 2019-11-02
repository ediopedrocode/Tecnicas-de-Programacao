#include <iostream>
#include <map>

using namespace std;

int main(){
    string palavra;
    map<char,int> contador;

    cout << "Insira uma palavra: ";
    getline(cin, palavra);

    for (auto letra : palavra){
        if (letra!=' '){
            contador[letra]++;
        }
    }

    for (auto elemento : contador){
        cout << "Caractere " << elemento.first << " apareceu " << elemento.second << " vez(s)." <<endl;
    }

    return 0;
}