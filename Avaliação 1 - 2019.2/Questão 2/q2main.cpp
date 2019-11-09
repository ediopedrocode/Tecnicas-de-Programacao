#include <iostream>
#include <fstream>
#include <map>

using namespace std;

int main(){
    ifstream arquivo;
    map< string, int > lista;
    string palavra;

    arquivo.open("arquivo_de_texto.txt");

    if (arquivo.is_open()){
        while (arquivo >> palavra){
            lista[palavra] = palavra.size();
        }
    }else{
        cout << "Arquivo não foi aberto." << endl;
    }

    cout << "Palavra: Tamanho\n";

    for (auto& elemento : lista){
        cout << "\t" << elemento.first << ": " << elemento.second << endl;
    }

    return 0;
}