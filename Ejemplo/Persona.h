#pragma once
#include "Cadena.h"
#include <iostream>
class Persona
{
	friend ostream & operator<<(ostream& out, const Persona& p);
public:	
	Persona(Cadena n = "N.N", int ci = 9999);
	Cadena Nombre() const;
	int CI() const;
	~Persona();
	/*ostream & operator<<(ostream& out, const Persona& p);*/
	
private:
	Cadena nombre;
	int ci;
};



