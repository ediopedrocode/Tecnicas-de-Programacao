#ifndef CLIENTE_H
#define CLIENTE_H

#define QTD_digitos_telefone 12
#define QTD_digitos_cep 8

#include <iostream>

using namespace std;

class Cliente{
    protected:
        string codigo;
        string nome;
        string telefone;
        string cep;
    public:
        bool setCodigo(string codigo_p);
        string getCodigo();

        bool setNome(string nome_p);
        string getNome();

        bool setTelefone(string telefone_p);
        string getTelefone();

        bool setCep(string cep_p);
        string getCep();
};

#endif