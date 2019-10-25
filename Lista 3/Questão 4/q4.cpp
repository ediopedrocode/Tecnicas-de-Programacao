#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> valor;
    string temp;
    int temp2;
    int contador_menor=0;
    int contador_maior=0;

    ifstream arquivo;
    arquivo.open("lista_de_500_numeros.txt");

    while(arquivo >> temp){
        arquivo >> temp;
        arquivo >> temp2;
        valor.push_back(temp2);
    }

    sort(valor.begin(), valor.end());

    cout << "Maior numero: " << valor[valor.size()-1] << endl;
    cout << "Menor numero: " << valor[0] << endl;

    arquivo.close();

    return 0;
}