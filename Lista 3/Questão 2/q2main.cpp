#include <iostream>
#include <fstream>
#include <stdlib.h>
#define QUANTIDADE 500 //quantidade de numeros a ser gerados
#define INTERVALO 999 //delimita o fim do intervalo dos numeros gerados

using namespace std;

int main(){
    ofstream arquivo;

    arquivo.open("500_random_numbers.txt");

    for (int i=0; i<QUANTIDADE; i++){
        arquivo << rand() % INTERVALO+1 << endl;
    }

    return 0;
}