#include <iostream>
#include <cstring>
#include <string.h>
#include "Arbol.cpp"

Nodo<int>* arbol = NULL;
ArbolBB<int> arbolOperador;

class Menu{
	private:
		std::string opciones[4]={"1. INGRESAR NODO","2. MOSTRAR EL ARBOL","3. ELIMINAR DEL ARBOL","4. SALIR"};
	public:
		Menu();
		void menuOpciones();
		void dibujarMenu(std::string *,int);
};

Menu::Menu(){
}

void Menu::menuOpciones(){
	int opc,elemento,cont=0;
	do{
		std::cout<<"\nARBOL BINARIO DE BUSQUEDA"<<std::endl;
		dibujarMenu(opciones,4);
		std::cout<<"\nINGRESE LA OPCION QUE DESEA EJECUTAR: ";
		std::cin>>opc;
		switch(opc){
			case 1:
				std::cout<<"INGRESAR EL VALOR: ";
				std::cin>>elemento;
				arbolOperador.insertarNodo(arbol,elemento);
				system("pause");
				break;
			case 2:
				arbolOperador.mostrarArbol(arbol,0);
				system("pause");
				break;
			case 3:
				std::cout<<"DIGITE EL ELEMENTO QUE DESEA ELIMINAR: ";
				std::cin>>elemento;
				arbolOperador.eliminar(arbol,elemento);
				system("pause");
				break;
			case 4:
				break;
			default:
				std::cout<<"\nLA OPCION INGRESADA NO ES VALIDA"<<std::endl;
				break;
		}
		system("cls");
	}while(opc != 4);
}

void Menu::dibujarMenu(std::string *opciones, int numOpcs){
	for(int i=0; i<numOpcs; i++)
		std::cout<<*(opciones+i)<<std::endl;
}