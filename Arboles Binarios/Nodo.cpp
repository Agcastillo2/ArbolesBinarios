#include "Nodo.h"
#include <stddef.h>
template<class T>
Nodo<T>::Nodo()
{
	this->dato = 0;
	this->derecha = NULL;
	this->izquierda = NULL;
}
template<class T>
Nodo<T>::Nodo(T newDato)
{
	this->dato = newDato;
	this->derecha = NULL;
	this->izquierda = NULL;
}
template<class T>
int Nodo<T>::getDato()
{
	return dato;
}
template<class T>
void Nodo<T>::setDato(T newDato)
{
	this->dato = newDato;
}
template<class T>
Nodo<T>*& Nodo<T>::getDerecha()
{
	return derecha;
}
template<class T>
void Nodo<T>::setDerecha(Nodo<T>* newNodoDerecha)
{
	this->derecha = newNodoDerecha;
}
template<class T>
Nodo<T>*& Nodo<T>::getIzquierda()
{
	return izquierda;
}
template<class T>
void Nodo<T>::setIzquierda(Nodo<T>* newNodoIzquierda)
{
	this->izquierda = newNodoIzquierda;
}