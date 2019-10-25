#include <iostream>

using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;
    public:
        
        Data(int dia, int mes, int ano);

        void setDia(int d);
        int getDia();

        void setMes(int m);
        int getMes();

        void setAno(int a);
        int getAno();

        void mostrarDados();
};