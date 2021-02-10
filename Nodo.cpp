/***********************************************************************
 * Module:  Nodo.cpp
 * Author:  aange
 * Modified: martes, 9 de febrero de 2021 21:59:13
 * Purpose: Implementation of the class Nodo
 ***********************************************************************/
#include <cstddef>
#include "Nodo.h"

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getDato()
// Purpose:    Implementation of Nodo::getDato()
// Return:     T
////////////////////////////////////////////////////////////////////////

template<class T>
T Nodo<T>::getDato(void) const
{
   return dato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setDato(T newDato)
// Purpose:    Implementation of Nodo::setDato()
// Parameters:
// - newDato
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T>
void Nodo<T>::setDato(T newDato)
{
   dato = newDato;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getIzq()
// Purpose:    Implementation of Nodo::getIzq()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

template<class T>
Nodo<T>* Nodo<T>::getIzq(void) const
{
   return izq;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setIzq(Nodo newIzq)
// Purpose:    Implementation of Nodo::setIzq()
// Parameters:
// - newIzq
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T>
void Nodo<T>::setIzq(Nodo* newIzq)
{
   izq = newIzq;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::getDer()
// Purpose:    Implementation of Nodo::getDer()
// Return:     Nodo
////////////////////////////////////////////////////////////////////////

template<class T>
Nodo<T>* Nodo<T>::getDer(void) const
{
   return der;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::setDer(Nodo newDer)
// Purpose:    Implementation of Nodo::setDer()
// Parameters:
// - newDer
// Return:     void
////////////////////////////////////////////////////////////////////////

template<class T>
void Nodo<T>::setDer(Nodo* newDer)
{
   der = newDer;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo()
// Purpose:    Implementation of Nodo::Nodo()
// Return:     
////////////////////////////////////////////////////////////////////////

template<class T>
Nodo<T>::Nodo(T dato)
{
	this->dato=dato;
   	this->der=NULL;
   	this->izq=NULL;
}

template<class T>
Nodo<T>::Nodo()
{
	this->dato=NULL;
   	this->der=NULL;
   	this->izq=NULL;
}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::~Nodo()
// Purpose:    Implementation of Nodo::~Nodo()
// Return:     
////////////////////////////////////////////////////////////////////////

template<class T>
Nodo<T>::~Nodo()
{

}

////////////////////////////////////////////////////////////////////////
// Name:       Nodo::Nodo(T dato, Nodo izq, Nodo der)
// Purpose:    Implementation of Nodo::Nodo()
// Parameters:
// - dato
// - izq
// - der
// Return:     
////////////////////////////////////////////////////////////////////////

/*template<class T>
Nodo<T>::Nodo(T dato, Nodo* izq, Nodo* der)
{
   this->dato=dato;
   this->der=der;
   this->izq=izq;
   
}*/

template class Nodo<int>;
