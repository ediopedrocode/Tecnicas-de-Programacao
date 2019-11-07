#include "q2juridica.h"

using namespace std;

bool PessoaJuridica::setCnpj(string cnpj_p){
    if (cnpj_p.size() == QTD_digitos_cnpj){
        cnpj = cnpj_p;
        return 1;
    }else{
        cout << "CNPJ inválido! Lembre-se dos 14 caracteres.\n";
        cout << "Tente novamente: ";
        return 0;
    }
}

bool PessoaJuridica::setInscricaoEstadual(string inscricao_p){
    if (inscricao_p.size() == QTD_digitos_inscricao){
        inscricao_estadual = inscricao_p;
        return 1;
    }else{
        cout << "Inscrição Estadual inválida! Lembre-se dos 11 dígitos.\n";
        cout << "Tente novamente: ";
        return 0;
    }
}

bool PessoaJuridica::setNomeFantasia(string fantasia_p){
    if (fantasia_p.size()<4){
        cout << "Nome fantasia muito pequeno! Insira um nome fantasia maior: ";
        return 0;
    }else{
        nome_fantasia = fantasia_p;
        return 1;
    }
}
        
string PessoaJuridica::getCnpj(){
    return cnpj;
}
        
string PessoaJuridica::getIncricaoEstadual(){
    return inscricao_estadual;
}

string PessoaJuridica::getNomeFantasia(){
    return nome_fantasia;
}

void PessoaJuridica::obterDados(){
    string temp;

    cout << "\n\n- Cadastro de Pessoa Jurídica -\n\n";
    
    cout << "Insira o seu código: ";
    do{
        getline(cin, temp);
    }while(!setCodigo(temp));
        
    cout << "Insira seu nome: ";
    do{
        getline(cin, temp);
    }while(!setNome(temp));

    cout << "Insira seu número de telefone com 12 dígitos na forma DDD-9-XXXX-XXXX: ";
    do{
        getline(cin, temp);
    }while(!setTelefone(temp));

    cout << "Insira seu CEP (8 dígitos): ";
    do{
        getline(cin, temp);
    }while(!setCep(temp));

    cout << "Insira o CNPJ (14 dígitos): ";
    do{
        getline(cin, temp);
    }while(!setCnpj(temp));

    cout << "Insira a Inscrição Estadual (11 dígitos): ";
    do{
        getline(cin, temp);
    }while(!setInscricaoEstadual(temp));

    cout << "Insira o Nome Fantasia: ";
    do{
        getline(cin, temp);
    }while(!setNomeFantasia(temp));
}

void PessoaJuridica::mostrarDadosJuridica(ofstream &a){
    a.open("Pessoa_Juridica.txt", ios::app);

    a << "\n\n- DADOS DE: " << getNome() << " -\n\n";
    a << "Código: " << getCodigo() << endl;
    a << "Nome: " << getNome() << endl;
    a << "Telefone: " << getTelefone() << endl;
    a << "CEP: " << getCep() << endl;
    a << "CNPJ: " << getCnpj() << endl;
    a << "Inscrição estadual: " << getIncricaoEstadual() << endl;
    a << "Nome fantasia: " << getNomeFantasia() << endl;
}