#include <iostream>
#include "fruta.h"

using namespace std;

void Fruta::setNome(string n){
    if (n.size()<2){
        nome = "Nome invalido.";
    }else{
        nome = n;
    }
}

string Fruta::getNome(){
    return nome;
}

void Fruta::setCor(string c){
    if (c.size()<2){
        cor = "Nome invalido.";
    }else{
        cor = c;
    }
}

string Fruta::getCor(){
    return cor;
}