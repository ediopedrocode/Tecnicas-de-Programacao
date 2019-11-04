#include <iostream>
#include <map>

#define INSERIR 1
#define REMOVER 2
#define ALTERAR 3
#define LISTAR 4
#define SAIR 5

using namespace std;

void listarOpcoes();

void inserirEndereco(map<string,string> &c);

void removerEndereco(map<string,string> &c);

void alterarEndereco(map<string,string> &c);

void listarEndereco(map<string,string> c);