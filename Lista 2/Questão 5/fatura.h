#include <iostream>

using namespace std;

class Fatura{
    private:
        string numero_de_serie;
        string descricao_parcial;
        int qtd_item;
        float preco_item;
    public:
        Fatura(string a, string b, int c, float d);

        void setNumeroDeSerie(string ns); 
        string getNumeroDeSerie();

        void setDescricaoParcial(string dp);
        string getDescricaoParcial();

        void setQtdItem(int qi);
        int getQtdItem();

        void setPrecoItem(float pi);
        float getPrecoItem();

        float faturaTotal();
        
        void mostrarDados();
};