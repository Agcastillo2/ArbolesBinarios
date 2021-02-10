/***********************************************************************
 * Module:  Arbol.h
 * Author:  aange
 * Modified: martes, 9 de febrero de 2021 21:58:57
 * Purpose: Declaration of the class Arbol
 ***********************************************************************/

#if !defined(__ArbolesBinarios_Arbol_h)
#define __ArbolesBinarios_Arbol_h

#include "Nodo.h"

template<class T>
class Arbol
{
public:
   void incercion(Nodo<T>* actual);
   void imprimir(Nodo<T>* actual);
   bool vacio();
   Arbol();
   ~Arbol();
   Nodo<T>* getRaiz(void);
   void setRaiz(Nodo<T>* newRaiz);
   //Arbol(Nodo<T>* raiz);

protected:
private:
   Nodo<T>* raiz;


};

#endif
