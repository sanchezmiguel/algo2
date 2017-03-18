#ifndef GRAFO_H
#define GRAFO_H

#include "Iterable.h"

typedef unsigned int nat;

template <class V, class A>
class Grafo abstract
{
public:
	// CONSTRUCTORAS

	virtual void AgregarVertice(const V& v) abstract;
	virtual void BorrarVertice(const V& v) abstract;
	virtual void AgregarArco(const V& v1, const V& v2, const A& arco) abstract;
	virtual void BorrarArco(const V& v1, const V& v2) abstract;

	// SELECTORAS
	
	virtual Iterador<V> Vertices() const abstract;
	virtual Iterador<V> Adyacentes(const V& v) const abstract;
	//virtual Iterador<V> Incidentes(const V& v) const abstract;

	virtual const A& ObtenerArco(const V& v1, const V& v2) const abstract;
	
	virtual nat CantidadVertices() const abstract;
	virtual nat CantidadArcos() const abstract;
	virtual nat CantidadAdyacentes(const V& v) const abstract;
	virtual nat CantidadIncidentes(const V& v) const abstract;
	
	//Tupla<Iterador<Iterador<V>>, nat> CaminosMasCortos(const V& vO, const V& vD, const FuncionCosto<V,A>& fCosto = FuncionCosto<V,A>::Default) const;

	// PREDICADOS
	virtual bool ExisteVertice(const V& v) const abstract;
	virtual bool ExisteArco(const V& v1, const V& v2) const abstract;
	virtual bool EstaLleno() const abstract;
	virtual bool EstaVacio() const abstract;
	virtual bool EsDirigido() const abstract;
	virtual bool EsConexo() const abstract;
	virtual bool HayCamino(const V& vO, const V& vD) const abstract;
};
#endif