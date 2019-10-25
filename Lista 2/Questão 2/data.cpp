#include <iostream>
#include "data.h"

void Data::setDia(int d){
    if (d>=1 and d<=31){
        dia = d;
    } else {
        dia = 1;
    }
}

int Data::getDia(){
    return dia;
}

void Data::setMes(int m){
    if (m>=1 and m<=12){
        mes = m;
    } else {
        mes = 1;
    }
}

int Data::getMes(){
    return mes;
}

void Data::setAno(int a){
    if (a<=10000){
        ano = a;
        } else {
        ano = 1;
    }
}

int Data::getAno(){
    return ano;
}

void Data::mostrarDados(){
    cout << getDia() << " / " << getMes() << " / " << getAno() << endl;
}

Data::Data(int dia, int mes, int ano){
    setDia(dia);
    setMes(mes);
    setAno(ano);
}