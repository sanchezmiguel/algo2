#include "SetAcotado.h"
#include "SetNoAcotado.h"
#include "Puntero.h"
#include "Comparacion.h"
#include "Comparador.h"
#include "Cadena.h"
#include "Persona.h"
#include "ComparaPersonasPorNombreYCedulaAscendente.h"
#include "ComparaPersonasPorNombreYCedulaDescendente.h"
#include "NodoAVL.h"
#include "avl.h"
#include "NodoLista.h"
#include "NodoABB.h"


void main()
{
	Puntero<NodoLista<Persona>> lista = new NodoLista<Persona>(Persona ("Miguel", 123123));
	Persona p1("MARIA", 123), p2("JUAN", 300), p3("ROSA", 150), p4("MARIA", 122);
	Puntero<NodoLista<Persona>> l = NULL;
	Puntero<Comparador<Persona>> pc = new Comparador<Persona>(new ComparaPersonasPorNombreYCedulaAscendente);
	lista->muestro(l);
	lista->insertoOrdenado(l, p1, pc);
	lista->muestro(l);
	lista->insertoOrdenado(l, p2, pc);
	lista->muestro(l);
	lista->insertoOrdenado(l, p3, pc);
	lista->muestro(l);
	lista->insertoOrdenado(l, p4, pc);
	lista->muestro(l);

	Puntero<Comparador<Persona>> pcd = new Comparador<Persona>(new ComparaPersonasPorNombreYCedulaDescendente);
	//l = NULL;
	//muestro(l);
	//insertoOrdenado(l, p1, pcd);
	//muestro(l);
	//insertoOrdenado(l, p2, pcd);
	//muestro(l);
	//insertoOrdenado(l, p3, pcd);
	//muestro(l);
	//insertoOrdenado(l, p4, pcd);
	//muestro(l);

	cout << "ABB Start" << endl;
	Puntero<NodoABB<Persona>> ABB = new NodoABB<Persona>(Persona("Miguel",123123123));
	Puntero<NodoABB<Persona>> abb = NULL;
	ABB->insertoOrdenado(abb, p1, pcd);
	cout << "Altura: " << ABB->altura(abb) << endl;
	//muestro(abb);
	ABB->insertoOrdenado(abb, p2, pcd);
	cout << "Altura: " << ABB->altura(abb) << endl;
	ABB->insertoOrdenado(abb, p3, pcd);
	cout << "Altura: " << ABB->altura(abb) << endl;
	ABB->insertoOrdenado(abb, p4, pcd);
	cout << "Altura: " << ABB->altura(abb) << endl;
	ABB->muestro(abb);

	/*insertoOrdenado(abb, p3, pcd);
	muestro(abb);*/

	cout << "ABB End" << endl;

	/*Puntero<Set<nat>> pares = new SetAcotado<nat>(5);
	for (nat i = 0; i < 5; i++)
		pares->Insertar((i + 1) * 2);
	Puntero<Set<nat>> impares = new SetNoAcotado<nat>();
	for (nat i = 0; i < 5; i++)
		impares->Insertar(i * 2 + 1);

	pares->Union(impares)->Imprimir();
	impares->Union(pares)->Imprimir();
	pares->Union(impares)->Diferencia(pares)->Imprimir();
	*/


	cout << "AVL";
	Puntero<NodoAVL<int>> avl = new NodoAVL<int>(10);
	Puntero<NodoAVL<int>> avl2 = NULL;
	int altura = avl->altura(avl);
	cout << "Altura: avl" << altura << endl;
	cout << "Altura: avl" << avl->altura(avl2) << endl;
	int x1 = 59;
	int x2 = 5;

	//avl->Insertar(x1);
	//avl->Insertar(x2);
	//avl->Insertar(9);
	//avl->Insertar(19);

	//avl->Borrar(x1);	
}
