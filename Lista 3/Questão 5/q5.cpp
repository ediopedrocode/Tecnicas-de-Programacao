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

    for(int elemento : valor){
        int comp;
        if (elemento != comp){
            cout << "Número: " << elemento << " - Frequência: " << count(valor.begin(), valor.end(), elemento) << endl;
        }
        comp = elemento;
    }

    arquivo.close();

    return 0;
}