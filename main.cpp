#include <iostream>
#include "listaligada.h"

using namespace std;


int main() {
	
	
    ListaLigada<int> lista;

    lista.push_front(10);
    lista.push_front(0);
    lista.push_front(4);
	lista.push_back(7);

    cout << "Cantidad: " <<lista.size()<< endl;
    lista.print();

    lista.pop_back();

    cout << "Cantidad: " <<lista.size()<< endl;
    lista.print();
   
    
    
    return 0;
}
