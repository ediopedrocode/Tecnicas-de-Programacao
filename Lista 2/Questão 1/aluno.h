#include <iostream>
#include "disciplinas.h"
#include <vector>

using namespace std;

class Aluno
{
    private:
        string nome;
        vector<Disciplinas> disciplinas;
        float media;
    public:
        void setNome(string nm);
        string getNome();

        void setMedia(float md);
        float getMedia();

        void obterDados();
        void mostrarDados();
};