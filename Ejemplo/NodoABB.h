#pragma once
#include "Puntero.h"
template<class T>
class NodoABB
{
#define max(a,b) (((a) > (b)) ? (a) : (b))
public:
	NodoABB(T nuevoDato, Puntero<NodoABB<T>> i = NULL, Puntero<NodoABB<T>> d = NULL);
	T dato;
	Puntero<NodoABB<T>> hIzq;
	Puntero<NodoABB<T>> hDer;
	~NodoABB() {}	
	Puntero<NodoABB<T>> & buscoPos(Puntero<NodoABB<T>> & abb, T d, Puntero<Comparador<T>> comp);
	void muestro(Puntero<NodoABB<T>>  p);
	static void insertoOrdenado(Puntero<NodoABB<T>> & abb, T d, Puntero<Comparador<T>> comp);
	int altura(Puntero<NodoABB<T>> abb);
	bool Existe(Puntero<NodoABB<T>> & abb, T d, Puntero<Comparador<T>> comp);

	/* Peso. Es el número de nodos del árbol sin contar la raíz	*/
	int Peso(Puntero<NodoABB<T>> & abb);

	int CantidadNodos(Puntero<NodoABB<T>> & abb);
};

#include "NodoABB.cpp"