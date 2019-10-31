#ifndef PESSOAFISICA_H
#define PESSOAFISICA_H

#define QTD_digitos_cpf 11
#define QTD_digitos_data 10

#include "q2cliente.h"

using namespace std;

class PessoaFisica : public Cliente{
    private:
        string cpf;
        string rg;
        string data_nascimento;
    public:
        bool setCpf(string cpf_p);
        string getCpf();

        bool setRg(string rg_p);
        string getRg();

        bool setDataDeNascimento(string data_p);
        string getDataDeNascimento();

        void obterDados();

        void mostrarDados();
};

#endif