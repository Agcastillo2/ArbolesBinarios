#include <iostream>
#include "Nodo.cpp"

using namespace std;
template <class T>
class ArbolBB {
private:
	Nodo<T>* raiz;
public:
	ArbolBB();
	Nodo<T>* getRaiz();
	void setRaiz(Nodo<T>*&);
	Nodo<T>* crearNodo(T);
	void insertarNodo(Nodo<T>*& , T );
	void inOrden(Nodo<T>* );
    Nodo<T>* combinarArbol(Nodo<T>*, Nodo<T>*);
    void eliminar(Nodo<T>*& , T);
    void mostrarArbol(Nodo<T>*,int);
};
