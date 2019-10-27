#include "q1funcoes.h"

using namespace std;

bool tamanho_palavra(string p1, string p2){
    return p1.size()<p2.size();
}

vector<string> lerPalavras(int q){
    vector<string> p;
    for (int i=0; i<q; i++){
        string temp;
        cout << "Insira palavra " << i+1 << ": ";
        cin >> temp;
        p.push_back(temp);  
        cin.ignore();
    }
    return p;
}

void mostrarCaracteristicas(vector<string> p){
    sort(p.begin(), p.end(), tamanho_palavra);

    if (p[0].size() == p[p.size()-1].size()){
        cout << "As 3 palavras tem o mesmo tamanho." << endl;
    }else{
        cout << "Maior palavra: " << p[p.size()-1] << endl;
        cout << "Menor palavra: " << p[0] << endl; 
    }
}