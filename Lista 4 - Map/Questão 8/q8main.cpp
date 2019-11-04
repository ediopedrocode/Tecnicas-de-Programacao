#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main(){
    ifstream arquivo;
    map<string, int> contador;
    string palavra;

    arquivo.open("arquivo_de_palavras.txt");

    if(arquivo.is_open()){
        while (arquivo >> palavra){
            contador[palavra]++;
        }

        cout << "\nFrequência das palavras no arquivo:\n\n";
        
        for (auto& elemento : contador){
            cout << elemento.first << ": " << elemento.second << " vez(s).\n";
        }

        cout << endl;
    }else{
        cout << "Não foi possível abrir o arquivo." << endl;
    }

    return 0;
}