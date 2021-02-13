#pragma once

template <class T>
class Nodo {
private:
	T dato;
	Nodo* derecha;
	Nodo* izquierda;
public:
	Nodo();
	Nodo(T);
	int getDato();
	void setDato(T);
	Nodo*& getDerecha();
	void setDerecha(Nodo<T>*);
	Nodo*& getIzquierda();
	void setIzquierda(Nodo<T>*);
};