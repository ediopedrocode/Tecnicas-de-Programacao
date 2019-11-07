#ifndef PESSOAJURIDICA_H
#define PESSOAJURIDICA_H

#define QTD_digitos_cnpj 14
#define QTD_digitos_inscricao 11

#include "q2cliente.h"

using namespace std;

class PessoaJuridica : public Cliente{
    private:
        string cnpj;
        string inscricao_estadual;
        string nome_fantasia;
    public:
        bool setCnpj(string cnpj_p);
        string getCnpj();
        
        bool setInscricaoEstadual(string inscricao_p);
        string getIncricaoEstadual();

        bool setNomeFantasia(string fantasia_p);
        string getNomeFantasia();

        void obterDados();

        void mostrarDadosJuridica(ofstream &a);
};

#endif