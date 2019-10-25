#include <iostream>
#include "disciplinas.h"

using namespace std;

void Disciplinas::setDisciplinas(string d){
    if (d.size()>1){
        nome_disciplina=d;
    }else{
        nome_disciplina="Nome inválido";
    }
}

string Disciplinas::getDisciplinas(){
    return nome_disciplina;
}

void Disciplinas::setNota(float n){
    if (n>=0 and n<=100){
        nota = n;
    }else{
        nota = 0;
    }
}

float Disciplinas::getNota(){
    return nota;
}