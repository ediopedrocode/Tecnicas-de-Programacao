#include <iostream>
#include <vector>

using namespace std;

int main(){
    int valor;
    vector<int> vetor;

    cout << "Informe valores inteiros:\n";

    while(cin >> valor){
        vetor.push_back(valor);
    }

    /*
    for(int elemento : vetor){
        cout << elemento << " ";
    }
    */
    //inclusao, no for, do auto
    for(auto elemento : vetor){
        cout << elemento << " ";
    }

    return 0;
}