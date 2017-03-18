#pragma once
#include"Puntero.h"

template<class T>
class NodoLista
{
public:
	NodoLista(T d, Puntero<NodoLista<T>> s = NULL);
	T dato;
	Puntero<NodoLista<T>> sig;
	~NodoLista();
	Puntero<NodoLista<T>> & buscoPos(Puntero<NodoLista<T>> & l, T d, Puntero<Comparador<T>> comp);
	void muestro(Puntero<NodoLista<T>>  p);
	void insertoOrdenado(Puntero<NodoLista<T>> & l, T d, Puntero<Comparador<T>> comp);
};

#include "NodoLista.cpp"