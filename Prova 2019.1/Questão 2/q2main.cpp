#include <iostream>
#include <fstream>

#include "q2cliente.h"
#include "q2fisica.h"
#include "q2juridica.h"

#define QNTD 1 //quantidade de pessoas a serem cadastradas por categoria

using namespace std;

int main(){
    ofstream arquivo_fisicos;
    ofstream arquivo_juridicos;

    PessoaFisica pessoa_fisica;
    PessoaJuridica pessoa_juridica;

    arquivo_fisicos.open("Pessoas_fisicas.txt", ios::app);
    arquivo_juridicos.open("Pessoas_juridicas.txt", ios::app);

    for (int i=0; i<QNTD; i++){
        pessoa_fisica.obterDados();
        arquivo_fisicos << pessoa_fisica.mostrarDados();
    }

    for (int i=0; i<QNTD; i++){
        pessoa_juridica.obterDados();
        arquivo_juridicos << pessoa_juridica.mostrarDados();
    }

    return 0;
}