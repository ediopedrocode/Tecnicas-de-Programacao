#include "q1function.h"

using namespace std;

int main(){
    int valor;
    vector<int> vetor;

    cout << "Insira valores inteiros: " << endl;

    while(cin>>valor){
        vetor.push_back(valor);
    }

    imprimirVetor(vetor);

    return 0;
}