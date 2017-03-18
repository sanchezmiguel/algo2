#ifndef AVL_H
#define AVL_H

//#include "Iterable.h"

template <class T>
class AVL // : public Iterable<T> 
{
public:

	virtual ~AVL() { }

	/**** Constructoras ****/
	// construye el AVL vac�o
	virtual void Vacio() abstract;
	/* construye un AVL con x insertado en la posici�n correcta */	
	virtual void Insertar(const T &x) abstract;

	/**** Predicado ****/
	// retorna true si el �rbol es vac�o
	virtual bool EsVacio() const abstract; 

	/**** Selectoras y otras ****/
	/* pre : el �rbol no es vac�o
     * post: retorna la ra�z del �rbol */
	virtual const T& Raiz() const abstract;
	/* pre : el �rbol no es vac�o
     * post: retorna el m�ximo elemento del AVL */
	virtual const T& Maximo() const abstract;
	/* pre : el �rbol no es vac�o
     * post: retorna el m�nimo elemento del AVL */
	virtual const T& Minimo() const abstract;
	// retorna true si x est� en el �rbol
	virtual bool Existe(const T &x) const abstract; 
	/* pre: no posee (la asumimos total)
 	 * post: retorna el AVL del que se ha borrado el elemento con clave x (si est�). */
	virtual void Borrar (const T &x) abstract;
	/* pre : el elemento est� presente en el �rbol
     * post: retorna el elemento */
	virtual const T& Recuperar(const T&) const abstract;
};
#endif