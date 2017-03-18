#ifndef NODOABB_CPP
#define NODOABB_CPP

#include "NodoABB.h"

template<class T>
NodoABB<T>::NodoABB(T nuevoDato, Puntero<NodoABB<T>> i = NULL, Puntero<NodoABB<T>> d = NULL)
{
	dato = nuevoDato; izq = i; der = d;
}

template<class T>
Puntero<NodoABB<T>> & NodoABB<T>::buscoPos(Puntero<NodoABB<T>> & abb, T d, Puntero<Comparador<T>> comp)
{
	if (abb == NULL)
		return abb;
	else if (comp->EsMayor(abb->dato, d))
		return buscoPos(abb->der, d, comp);
	else
		return buscoPos(abb->izq, d, comp);
}
template<class T>
void NodoABB<T>::muestro(Puntero<NodoABB<T>>  p)
{
	if (p != NULL) {
		Puntero<NodoABB<T>> abb = p->izq;
		muestro(abb);
		cout << p->dato << endl;
		abb = p->der;
		muestro(abb);
	}
}

template<class T>
void NodoABB<T>::insertoOrdenado(Puntero<NodoABB<T>> & abb, T d, Puntero<Comparador<T>> comp)
{
	if (abb == NULL) {
		Puntero<NodoABB<T>> & p = abb;
		p = new NodoABB<T>(d, NULL, NULL);
	}
	else if (comp->EsMayor(abb->dato, d))
		insertoOrdenado(abb->izq, d, comp);
	else
		insertoOrdenado(abb->der, d, comp);

}


#endif