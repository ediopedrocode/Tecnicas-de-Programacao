#include "q1funcoes.h"

#define QNTD 3 //quantidade de palavras a serem lidas

using namespace std;

int main(){
    vector<string> palavra;

    palavra = lerPalavras(QNTD);

    mostrarCaracteristicas(palavra);

    return 0;
}