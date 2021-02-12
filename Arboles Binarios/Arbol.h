/***********************************************************************
 * Module:  Arbol.h
 * Author:  aange
 * Modified: martes, 9 de febrero de 2021 21:58:57
 * Purpose: Declaration of the class Arbol
 ***********************************************************************/

#if !defined(__ArbolesBinarios_Arbol_h)
#define __ArbolesBinarios_Arbol_h

#include "Nodo.h"

class Arbol
{
public:

	Arbol();
   	void insertar(int);
   	void insertar(Nodo * , int dato);
   	bool vacio();
   	Nodo* getRaiz(void);
   	void setRaiz(Nodo* newRaiz);
   	void inorder(Nodo* nodo);
	void eliminar(Nodo * nodo, int );
	
private:
   Nodo * raiz;


};

#endif
