/***********************************************************************
 * Module:  Arbol.cpp
 * Author:  aange
 * Modified: martes, 9 de febrero de 2021 21:58:57
 * Purpose: Implementation of the class Arbol
 ***********************************************************************/
#include <cstddef>
#include <iostream>
#include "Arbol.h"

using namespace std;
////////////////////////////////////////////////////////////////////////
// Name:       Arbol::incercion(T dato)
// Purpose:    Implementation of Arbol::incercion()
// Parameters:
// - dato
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T>
void Arbol<T>::incercion(Nodo<T>* actual)
{
	char resp;
	int dato;
	actual= new Nodo<T>;
	cout<<"Ingrese el dato"<<endl;
	cin>> dato;
	actual->setDato(dato);
	cout<<"Tiene hijo izquierdo(s/n)"<<endl;
	cin>> resp;
	if(resp=='s'){
		incercion(actual->getIzq());
		actual->setIzq(this->getRaiz());
	}
	cout<<"Tiene hijo derecho(s/n)"<<endl;
	cin>> resp;
	if(resp=='s'){
		incercion(actual->getDer());
		actual->setDer(this->getRaiz());
	}
	this->setRaiz(actual);
}

////////////////////////////////////////////////////////////////////////
// Name:       Arbol::imprimir()
// Purpose:    Implementation of Arbol::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T>
void Arbol<T>::imprimir(Nodo<T>* actual)
{
  	if(actual){
  		if(actual->getIzq()){
  			cout<<actual->getIzq()->getDato();
  			imprimir(actual->getIzq());
		  }
		  //cout<<actual->getDer()->getDato();
		  imprimir(actual->getDer());
	  }
}

template<class T>
bool Arbol<T>::vacio(void)
{
	return(this->raiz==NULL)? true:false;
}
////////////////////////////////////////////////////////////////////////
// Name:       Arbol::Arbol()
// Purpose:    Implementation of Arbol::Arbol()
// Return:     
////////////////////////////////////////////////////////////////////////

template<class T>
Arbol<T>::Arbol()
{
	this->raiz=NULL;
}

////////////////////////////////////////////////////////////////////////
// Name:       Arbol::~Arbol()
// Purpose:    Implementation of Arbol::~Arbol()
// Return:     
////////////////////////////////////////////////////////////////////////

template<class T>
Arbol<T>::~Arbol()
{
}

////////////////////////////////////////////////////////////////////////
// Name:       Arbol::getRaiz()
// Purpose:    Implementation of Arbol::getRaiz()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

template<class T>
Nodo<T>* Arbol<T>::getRaiz(void)
{
   return raiz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Arbol::setRaiz(Nodo newRaiz)
// Purpose:    Implementation of Arbol::setRaiz()
// Parameters:
// - newRaiz
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T>
void Arbol<T>::setRaiz(Nodo<T>* newRaiz)
{
   raiz = newRaiz;
}

////////////////////////////////////////////////////////////////////////
// Name:       Arbol::Arbol(Nodo raiz)
// Purpose:    Implementation of Arbol::Arbol()
// Parameters:
// - raiz
// Return:     
////////////////////////////////////////////////////////////////////////

/*template<class T>
Arbol<T>::Arbol(Nodo<T>* raiz)
{
   this->raiz=raiz;
}*/
