#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    vector<int> valor;
    char continuar;
    float somador=0;
    float mediana;

    do{
        int temp;
        cout << "Insira um valor: ";
        cin >> temp;

        valor.push_back(temp);

        somador+=temp; //soma de valores para cálculo de média

        cout << "Deseja inserir outro valor? (s/n) ";
        cin >> continuar;
        cin.ignore();
    }while(continuar=='s');

    if (valor.size()%2==0){
        mediana = (valor[(valor.size()/2)-1] + valor[((valor.size()/2)+1)-1])/2;
    }else{
        mediana = valor[((valor.size()+1)/2)-1];
    }

    sort(valor.begin(), valor.end()); //ordenação

    cout << "\n-----------------\n";
    cout << "Valores ordenados:" << endl; 
    for (auto elemento : valor){
        cout << elemento << endl; 
    }
    cout << "Tamanho do vector: " << valor.size() << endl;
    cout << "Média: " << somador/valor.size() << endl;
    cout << "Mediana: " << mediana << endl; 

    return 0;
}