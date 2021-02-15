#include <iostream>
#include "Arbol.h"



int main(int argc, char** argv) {
	
	std::cout<<"\n\t\t< Arboles Busqueda Binaria >"<<std::endl;
	
	Arbol abb;
	
	abb.insertar(6);
	abb.insertar(3);
	abb.insertar(8);
	abb.insertar(1);
	abb.insertar(7);
	abb.insertar(12);
	abb.insertar(0);
	abb.insertar(5);
	
	std::cout<<std::left<<"\n\t< Mostrar en orden >"<<std::endl;
	
	abb.inorder( abb.getRaiz() );
	
	std::cout<<std::left<<"\n\t< Eliminar datos >"<<std::endl;
	
	abb.eliminar(abb.getRaiz(),3);
	//abb.eliminar(abb.getRaiz(),);
	
	std::cout<<std::left<<"\n\t< Mostrar en orden >"<<std::endl;
	
	abb.inorder(abb.getRaiz());
	
	//std::cout<<"\n\t\t6\n\t\t3      8\n\t1\t5\t7\t12\n0"<<std::endl;
	//obtener el nivel del arbol de un nodo en base a su dato 
	
	std::cout<<std::endl<<"Nivel: "<< abb.getNivelDato(abb.getRaiz(), 12, 0);
	return 0;
}
