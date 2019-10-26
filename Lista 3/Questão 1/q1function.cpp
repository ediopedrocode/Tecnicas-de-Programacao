#include "q1function.h"

using namespace std;

void imprimirVetor(vector<int> v){
    cout << "Impressão dos valores do vetor: ";
    for (auto elemento : v){
        if (elemento == v[0]){ // este "if" é simplesmente para organização de pontuação
            cout << elemento;
        } else {
            cout << ", " << elemento;
        }
    }
    cout << ".\n";
}
