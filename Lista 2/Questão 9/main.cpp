#include <iostream>
#include "maca.h"
#include "banana.h"

using namespace std;

int main(){
    Maca a("vermelha");
	Banana b;
 
	cout << "A " << a.getNome() << " é " << a.getCor() << ".\n";
	cout << "A " << b.getNome() << " é " << b.getCor() << ".\n";
	return 0;
}