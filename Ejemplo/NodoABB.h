#pragma once
#include "Puntero.h"
template<class T>
class NodoABB
{
public:
	NodoABB(T nuevoDato, Puntero<NodoABB<T>> i = NULL, Puntero<NodoABB<T>> d = NULL);
	T dato;
	Puntero<NodoABB<T>> izq;
	Puntero<NodoABB<T>> der;
	~NodoABB() {}	
	Puntero<NodoABB<T>> & buscoPos(Puntero<NodoABB<T>> & abb, T d, Puntero<Comparador<T>> comp);
	void muestro(Puntero<NodoABB<T>>  p);
	void insertoOrdenado(Puntero<NodoABB<T>> & abb, T d, Puntero<Comparador<T>> comp);
};

#include "NodoABB.cpp"