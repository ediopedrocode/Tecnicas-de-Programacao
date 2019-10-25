#include <iostream>
#include "fatura.h"

Fatura::Fatura(string a, string b, int c, float d){
    setNumeroDeSerie(a);
    setDescricaoParcial(b);
    setQtdItem(c);
    setPrecoItem(d);
}

void Fatura::setNumeroDeSerie(string ns){
    numero_de_serie = ns;
}

string Fatura::getNumeroDeSerie(){
    return numero_de_serie;
}

void Fatura::setDescricaoParcial(string dp){
    descricao_parcial = dp;
}

string Fatura::getDescricaoParcial(){
    return descricao_parcial;
}

void Fatura::setQtdItem(int qi){
    if (qi<0){
        qtd_item = 0;
    } else{
        qtd_item = qi;
    }
}

int Fatura::getQtdItem(){
    return qtd_item;
}

void Fatura::setPrecoItem(float pi){
    if (pi<0){
        preco_item = 0;
    } else{
        preco_item = pi;
    }
}

float Fatura::getPrecoItem(){
    return preco_item;
}

float Fatura::faturaTotal(){
    return (qtd_item*preco_item);
}

void Fatura::mostrarDados(){
    cout << "Houve a solicitação de " << getQtdItem() << " unidade(s) do produto " << getNumeroDeSerie() << endl 
    << "descrito como " << getDescricaoParcial() << ", avaliado no valor de " << getPrecoItem() << " reais."<< endl
    << "A fatura ficou no valor de " << faturaTotal() << " reais." << endl;
}