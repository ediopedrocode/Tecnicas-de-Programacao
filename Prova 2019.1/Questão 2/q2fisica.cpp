#include "q2fisica.h"

using namespace std;

bool PessoaFisica::setCpf(string cpf_p){
    if (cpf_p.size() == QTD_digitos_cpf){
        cpf = cpf_p;
        return 1;
    }else{
        cout << "Número de CPF inválido! Lembre-se de digitar apenas os números: ";
        return 0;
    }
}

bool PessoaFisica::setRg(string rg_p){
    if (rg_p.size()>4 and rg_p.size()<11){
        rg = rg_p;
        return 1;
    }else{
        cout << "Número de RG inválido! Tente novamente: ";
        return 0;
    }
}

bool PessoaFisica::setDataDeNascimento(string data_p){
    if (data_p.size()== QTD_digitos_data){
        data_nascimento = data_p;
        return 1;
    }else{
        cout << "Data inválida! Lembre-se de digitar com as barras (Ex: 01/01/2000): ";
        return 0;
    }
    
}
        
string PessoaFisica::getCpf(){
    return cpf;
}

string PessoaFisica::getRg(){
    return rg;
}

string PessoaFisica::getDataDeNascimento(){
    return data_nascimento;
}

void PessoaFisica::obterDados(){
    string temp;

    cout << "\n\n- Cadastro de Pessoa Física -\n\n";
    
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

    cout << "Insira seu CPF (11 dígitos): ";
    do{
        getline(cin, temp);
    }while(!setCpf(temp));

    cout << "Insira seu RG: ";
    do{
        getline(cin, temp);
    }while(!setRg(temp));

    cout << "Insira a data do seu nascimento (coloque as barras): ";
    do{
        getline(cin, temp);
    }while(!setDataDeNascimento(temp));
}

void PessoaFisica::mostrarDadosFisica(ofstream &a){
    a.open("Pessoas_Fisicas.txt", ios::app);

    a << "\n\n- DADOS DE: " << getNome() << " -\n\n";
    a << "Código: " << getCodigo() << endl;
    a << "Nome: " << getNome() << endl;
    a << "Telefone: " << getTelefone() << endl;
    a << "CEP: " << getCep() << endl;
    a << "CPF: " << getCpf() << endl;
    a << "RG: " << getRg() << endl;
    a << "Data de nascimento: " << getDataDeNascimento() << endl;
}