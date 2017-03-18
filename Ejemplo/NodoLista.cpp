#ifndef NODOLISTA_CPP
#define NODOLISTA_CPP
#include "NodoLista.h"


template<class T>
NodoLista<T>::NodoLista(T d, Puntero<NodoLista<T>> s = NULL)
{
	dato = d; sig = s;
}

template<class T>
NodoLista<T>::~NodoLista()
{
}

template<class T>
Puntero<NodoLista<T>> & NodoLista<T>::buscoPos(Puntero<NodoLista<T>> & l, T d, Puntero<Comparador<T>> comp)
{
	if (l == NULL || comp->EsMayor(l->dato, d))
		return l;
	else
		return buscoPos(l->sig, d, comp);
}

template<class T>
void NodoLista<T>::muestro(Puntero<NodoLista<T>>  p)
{
	Puntero<NodoLista<T>> l = p;
	cout << endl;
	while (l != NULL)
	{
		cout << l->dato << " - "; l = l->sig;
	};
	cout << endl;
}

template<class T>
void NodoLista<T>::insertoOrdenado(Puntero<NodoLista<T>> & l, T d, Puntero<Comparador<T>> comp)
{
	Puntero<NodoLista<T>> & p = buscoPos(l, d, comp);
	Puntero<NodoLista<T>> s = p;
	p = new NodoLista<T>(d, s);
}


#endif