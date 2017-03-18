#pragma once

#include "Puntero.h"

template <class T>
class NodoAVL
{
	typedef Puntero<NodoAVL> pNodoAvl;

public:
	NodoAVL(const T& d);
	NodoAVL(const T& d, pNodoAvl izq, pNodoAvl der);
	~NodoAVL() {}

	bool operator==(const NodoAVL<T>& nodo);
	bool operator<(const NodoAVL<T>& nodo);
	bool operator>(const NodoAVL<T>& nodo);

	T dato;
	pNodoAvl hIzq;
	pNodoAvl hDer;
	int fb;
};

#include "NodoAVL.cpp"
