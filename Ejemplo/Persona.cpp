#include "Persona.h"

ostream & operator<<(ostream& out, const Persona& p)
{
	cout << p.Nombre() << "  " << p.CI();
	return out;
}

Persona::Persona(Cadena n, int ciNueva)
{
	nombre = n; ci = ciNueva;
}

Cadena Persona::Nombre() const 
{
	return nombre;
}
int Persona::CI() const
{
	return ci;
}

Persona::~Persona()
{
}
