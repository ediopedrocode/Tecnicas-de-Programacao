#include <iostream>
#include <stdlib.h>
#include <fstream>

using namespace std;

int main(){
    ofstream arquivo;
    arquivo.open("lista_de_500_numeros.txt");

    for(int i=0; i<500; i++){
        arquivo << "Numero " << i+1 << ": " << rand() % 1000 << endl;
    }

    return 0;
}