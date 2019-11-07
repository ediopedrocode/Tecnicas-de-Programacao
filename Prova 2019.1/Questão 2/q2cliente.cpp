#include "q2cliente.h"

using namespace std;

bool Cliente::setCodigo(string codigo_p){
    if (codigo_p.size()<4 and codigo_p.size()>8){
        cout << "O seu código deve ter entre 4 e 8 caracteres. Insira novamente: "; 
        return 0;
    }else{
        codigo = codigo_p;
        return 1;
    }
}

bool Cliente::setNome(string nome_p){
    if (nome_p.size() < 4){
        cout << "Nome muito pequeno! Insira um nome maior: ";
        return 0;
    }else{
        nome = nome_p;
        return 1;
    }
}

bool Cliente::setTelefone(string telefone_p){
    if (telefone_p.size() == QTD_digitos_telefone){
        telefone = telefone_p;
        return 1;
    }else{
        cout << "Seu número de telefone deve conter exatos 12 digitos (DDD-9-XXXX-XXXX).\n";
        cout << "Tente novamente: ";
        return 0;
    }
}

bool Cliente::setCep(string cep_p){
    if (cep_p.size() == QTD_digitos_cep){
        cep = cep_p;
        return 1;
    }else{
        cout << "Atenção, o CEP deve conter 8 digitos.\nTente novamente: ";
        return 0;
    }
}

string Cliente::getCodigo(){
    return codigo;
}

string Cliente::getNome(){
    return nome;
}

string Cliente::getTelefone(){
    return telefone;
}

string Cliente::getCep(){
    return cep;
}

