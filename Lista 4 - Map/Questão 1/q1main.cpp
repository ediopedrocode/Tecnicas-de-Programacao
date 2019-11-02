#include <iostream>
#include <map>

using namespace std;

int main(){
    int n;
    map<int,int> lista;

    cout << "Insira um número: ";
    cin >> n;

    for(int i=1; i<=n; i++){
        lista[i] = i*i;
    }

    for (auto elemento : lista){
        cout << elemento.first << " - " << elemento.second << endl;
    }

    return 0;
}