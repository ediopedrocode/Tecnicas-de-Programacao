#ifndef DISCIPLINAS_H
#define DISCIPLINAS_H
#include <iostream>

using namespace std;

class Disciplinas{
    protected:
        string nome_disciplina;
        float nota;
    public:
        void setDisciplinas(string d);
        string getDisciplinas();

        void setNota(float n);
        float getNota();
};

#endif