#ifndef NODOAVL_CPP
#define NODOAVL_CPP

#include "NodoAVL.h"


template <class T>
NodoAVL<T>::NodoAVL(const T& d)
{
	dato = d;
	fb = 0;
}

template <class T>
NodoAVL<T>::NodoAVL(const T& d, pNodoAvl izq, pNodoAvl der)
{
	dato = d;
	fb = 0;
	hIzq = izq;
	hDer = der;
}

template <class T>
bool NodoAVL<T>::operator==(const NodoAVL<T>& nodo) { return dato == &nodo; }

template <class T>
bool NodoAVL<T>::operator<(const NodoAVL<T>& nodo) { return dato < &nodo; }

template <class T>
bool NodoAVL<T>::operator>(const NodoAVL<T>& nodo) { return dato > &nodo; }

#endif