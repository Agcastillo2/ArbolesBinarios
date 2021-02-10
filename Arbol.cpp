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

template<class T>
void Arbol<T>::insertar(T dato){
	//this->raiz = insertar(dato,this->raiz);
	
	if(vacio()){
		raiz = new Nodo<T>(dato);
	}else if(dato < raiz->getDato() ){
		
		raiz->getIzq()
		
	}else if(dato > subRaiz->getDato() ) {
		
		
	}
	
}

template<class T>
Nodo<T>* Arbol<T>::insertar(T dato,Nodo<T>* subRaiz){
	
	
	if(vacio()){
		
		subRaiz = new Nodo<T>(dato);
		
	}else if(dato < subRaiz->getDato() ){
		
		cout<<"i"<<endl;
		izq = insertar(dato, subRaiz->getIzq() );
		cout<<"d"<<endl; 
		subRaiz->setIzq(izq);
		
		
	}else if(dato > subRaiz->getDato() ) {
		
		cout<<"d"<<endl; 
		Nodo<T>* der = insertar(dato, subRaiz->getDer() );
		subRaiz->setDer(der);
		
	}else{
		throw "Nodo duplicado";          
	}
	
	return subRaiz;  
	
	
}
	
	
// Parameters:
// - dato
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T>
void Arbol<T>::incercion(T dato,Nodo<T>* arbol)
{
	Nodo<T>* nuevo = new Nodo<T>();
	nuevo->setDato(dato);
	
	if(vacio()){
		this->raiz = arbol;
	}else if( dato < this->raiz->getDato() ){
		incercion(dato,this->raiz->getIzq());
	}else{
		incercion(dato,this->raiz->getDer());
	}
	
}

////////////////////////////////////////////////////////////////////////
// Name:       Arbol::imprimir()
// Purpose:    Implementation of Arbol::imprimir()
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T>
void Arbol<T>::imprimir(Nodo<T>* r)
{
  	r = this->raiz;
  	if(r != NULL ){
  		
  		cout<<r->getDato()<<endl;
  		imprimir(r->getIzq());
  		imprimir(r->getDer());
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

template class Arbol<int>;