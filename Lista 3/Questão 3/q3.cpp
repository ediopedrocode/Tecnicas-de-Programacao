#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
    vector<int> valor;
    string temp;
    int temp2;

    ifstream arquivo;
    arquivo.open("lista_de_500_numeros.txt");

    while(arquivo >> temp){
        arquivo >> temp;
        arquivo >> temp2;
        valor.push_back(temp2);
    }

    for(auto elemento : valor){
        cout << elemento << endl;
    }

    arquivo.close();

    return 0;
}