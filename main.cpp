#include <iostream>
#include "Arbol.h"
using namespace std;


void imprimir();

int main(int argc, char** argv) {
	
	Arbol<int>* abb = new Arbol<int>();
	
	abb->insertar(3);
	
	abb->insertar(0);
	//abb->insertar(5);
	//abb->insertar(6);
	
	cout<<"imprimir"<<endl; 
	abb->imprimir(abb->getRaiz());
	
	 
	return 0;
}