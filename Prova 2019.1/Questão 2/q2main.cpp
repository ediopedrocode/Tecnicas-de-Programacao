#include <iostream>
#include <fstream>

#include "q2cliente.h"
#include "q2fisica.h"
#include "q2juridica.h"

#define QNTD 2 //quantidade de pessoas a serem cadastradas por categoria

using namespace std;

int main(){
    ofstream arquivo_fisicos;
    ofstream arquivo_juridicos;

    PessoaFisica pessoa_fisica;
    PessoaJuridica pessoa_juridica;

    for (int i=0; i<QNTD; i++){
        pessoa_fisica.obterDados();
        pessoa_fisica.mostrarDadosFisica(arquivo_fisicos);
    }

    for (int i=0; i<QNTD; i++){
        pessoa_juridica.obterDados();
        pessoa_juridica.mostrarDadosJuridica(arquivo_juridicos);
    }

    return 0;
}