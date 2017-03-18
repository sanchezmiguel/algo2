#ifndef COLA_PRIORIDAD_H
#define COLA_PRIORIDAD_H

template <class T>
class ColaPrioridad {
public:
	virtual ~ColaPrioridad() { }

	/**** Constructoras ****/
	// construye La Cola de Prioridad vacía
	virtual void Vacio() = 0;
	/* construye La Cola de Prioridad con x insertado en la posición correcta */	
	virtual void Insertar(T &x) = 0;

	/**** Predicado ****/
	// retorna true si La Cola de Prioridad es vacia
	virtual bool EsVacio() const = 0; 

	/**** Selectoras y otras ****/
	// retorna el elemento de menor prioridad de la cola
	virtual T Min() = 0;

	// Borra el elemento demenor prioridad
	virtual void BorrarMin() = 0;
};
#endif