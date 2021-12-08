#include <iostream>
#include "listaligada.h"
using namespace std;
int main()
{
    ListaLigada<int> lista;
    lista.push_front(10);
    lista.push_front(0);
    lista.push_front(4);
    lista.push_back(7);
    lista.push_back(8);
    lista.print();
    cout << "cantidad de nodos de la lista: " << lista.size() << endl;
    lista.pop_front();
    lista.pop_back();
    lista.print();
    cout << "cantidad de nodos de la lista: " << lista.size() << endl;
    return 0;
}
