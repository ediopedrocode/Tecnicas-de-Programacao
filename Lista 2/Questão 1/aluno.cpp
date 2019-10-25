#include <iostream>
#include <cstring>

using namespace std;

#include "aluno.h"

void Aluno::setNome(string nm)
{
    if(nm.size()>=3) {
        nome = nm;
    } else {
        nome = "Nome muito pequeno.";
    }
}

string Aluno::getNome()
{
    return nome;
}

void Aluno::setMedia(float md)
{
    media = md/disciplinas.size();
}

float Aluno::getMedia()
{

    return media;
}

void Aluno::obterDados()
{
    string temp_nome;
    int contador;
    float somador;
    cout << "Insira o nome do Aluno: ";
    cin.ignore();
    getline(cin, temp_nome);
    setNome(temp_nome);
    cout << "Insira a quantidade de disciplinas que deseja cadastrar: ";
    cin >> contador;
    cout << endl; //só para organização
    for(int i=1; i<=contador; i++){
        Disciplinas disciplina;
        string temp1;
        float temp2;

        cout << "Insira o nome da disciplina " << i << ": ";
        cin.ignore();
        getline(cin, temp1);
        disciplina.setDisciplinas(temp1);
        cout << "Insira a nota de " << temp1 << ": ";
        cin >> temp2;
        somador+=temp2;
        disciplina.setNota(temp2);
        disciplinas.push_back(disciplina);
        cout << endl; //só para organização
    }
    setMedia(somador);
}

void Aluno::mostrarDados()
{
    cout << endl << "Dados do Aluno:" << endl;
    cout << "Nome: " << getNome() << endl << endl;
    cout << "A seguir a relação de disciplinas e suas notas:" <<endl;
    for(int i=0; i<disciplinas.size(); i++){
        cout << disciplinas[i].getDisciplinas() << " -";
        cout << " Nota: " << disciplinas[i].getNota() << endl;
    }
    cout << endl << "Media geral: " << getMedia();
}