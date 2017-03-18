#pragma once

#include "Puntero.h"

template <class T>
class NodoAVL
{
	typedef Puntero<NodoAVL> pNodoAvl;
#define max(a,b) (((a) > (b)) ? (a) : (b))

public:
	T dato;
	pNodoAvl hIzq;
	pNodoAvl hDer;
	int fb;
	
	NodoAVL(const T& d);
	NodoAVL(const T& d, pNodoAvl izq, pNodoAvl der);
	~NodoAVL() {}

	bool operator==(const NodoAVL<T>& nodo);
	bool operator<(const NodoAVL<T>& nodo);
	bool operator>(const NodoAVL<T>& nodo);

	int altura(pNodoAvl nodo);
};

#include "NodoAVL.cpp"
