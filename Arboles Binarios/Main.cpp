#include <stdio.h>
#include <iostream>
#include "Arbol.cpp"
#include "Nodo.cpp"

using namespace std;

int main(){
	Arbol<int> arb;
	Nodo<int>*ap;
	ap=arb.getRaiz();
	arb.incercion(ap);
	ap=arb.getRaiz();
	arb.imprimir(ap);
	return 0;
}
