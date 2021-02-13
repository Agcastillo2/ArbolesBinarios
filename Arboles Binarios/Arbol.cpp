#include <iostream>
#include "Arbol.h"

using namespace std;

template<class T>
ArbolBB<T>::ArbolBB()
{
	raiz = NULL;
}

template<class T>
Nodo<T>* ArbolBB<T>::getRaiz()
{
	return raiz;
}

template<class T>
void ArbolBB<T>::setRaiz(Nodo<T>*& newRaiz)
{
	this->raiz = newRaiz;
}

template<class T>
Nodo<T>* ArbolBB<T>::crearNodo(T dato)
{
	Nodo<T>* nuevoNodo = new Nodo<T>();
	nuevoNodo->setDato(dato);
	nuevoNodo->setIzquierda(NULL);
	nuevoNodo->setDerecha(NULL);
	return nuevoNodo;
}

template<class T>
void ArbolBB<T>::insertarNodo(Nodo<T>*& arbol, T dato)
{
	if (arbol == NULL)
	{
		Nodo<T>* newNodo = crearNodo(dato);
		arbol = newNodo;
	}
	else
	{
		int valorRaiz = arbol->getDato();
		if (dato < valorRaiz) {
			insertarNodo(arbol->getIzquierda(), dato);
		}
		else {
			insertarNodo(arbol->getDerecha(), dato);
		}
	}
}

template<class T>
void ArbolBB<T>::inOrden(Nodo<T>* arbol)
{
	if (arbol != NULL) {
		inOrden(arbol->getIzquierda());
		cout << arbol->getDato() << "\t";
		inOrden(arbol->getDerecha());
	}
}

template<class T>
Nodo<T>* ArbolBB<T>::combinarArbol(Nodo<T>* izquierda, Nodo<T>* derecha)
{
    if(izquierda==NULL)
        return derecha;
    if(derecha==NULL)
        return izquierda;
    Nodo<T>* centro = combinarArbol(izquierda->getDerecha(), derecha->getIzquierda());
    izquierda->getDerecha() = centro;
    derecha->getIzquierda() = izquierda;
    return derecha;

}

template<class T>
void ArbolBB<T>::eliminar(Nodo<T>*& arbol, T dato)
{
	if(arbol==NULL){
        cout<<"No hay coincidencias"<<endl;
        return;
	}
     if(dato<arbol->getDato())
         eliminar(arbol->getIzquierda(),dato);
     else if(dato>arbol->getDato())
         eliminar(arbol->getDerecha(), dato);

     else
     {
         Nodo<T>* aux = arbol;
         arbol = combinarArbol(arbol->getIzquierda(), arbol->getDerecha());
         delete aux;
     }
}

template <class T>
void ArbolBB<T>::mostrarArbol(Nodo<T>* arbol,int contador){
	if(arbol == NULL)
		return;
	else{
		mostrarArbol(arbol->getDerecha(),contador+1);
		for(int i=0; i<contador; i++){
			std::cout<<"  ";
		}
		std::cout<<arbol->getDato()<<std::endl;
		mostrarArbol(arbol->getIzquierda(),contador+1);
	}
}