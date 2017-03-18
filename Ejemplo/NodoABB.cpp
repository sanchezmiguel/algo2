#ifndef NODOABB_CPP
#define NODOABB_CPP

#include "NodoABB.h"

template<class T>
NodoABB<T>::NodoABB(T nuevoDato, Puntero<NodoABB<T>> i = NULL, Puntero<NodoABB<T>> d = NULL)
{
	dato = nuevoDato; hIzq = i; hDer = d;
}

template<class T>
Puntero<NodoABB<T>> & NodoABB<T>::buscoPos(Puntero<NodoABB<T>> & abb, T d, Puntero<Comparador<T>> comp)
{
	if (abb == NULL)
		return abb;
	else if (comp->EsMayor(abb->dato, d))
		return buscoPos(abb->hDer, d, comp);
	else
		return buscoPos(abb->hIzq, d, comp);
}
template<class T>
void NodoABB<T>::muestro(Puntero<NodoABB<T>>  p)
{
	if (p != NULL) {
		Puntero<NodoABB<T>> abb = p->hIzq;
		muestro(abb);
		cout << p->dato << endl;
		abb = p->hDer;
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
		insertoOrdenado(abb->hIzq, d, comp);
	else
		insertoOrdenado(abb->hDer, d, comp);

}

template<class T>
int NodoABB<T>::altura(Puntero<NodoABB<T>> abb)
{
	int h = 0;
	if (abb != NULL) {
		int ai = altura(abb->hIzq);
		int ad = altura(abb->hDer);
		h = max(ai, ad) + 1;
	}
	return h;
}


#endif