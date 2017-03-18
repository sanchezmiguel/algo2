#include "ComparaPersonasPorNombreYCedulaDescendente.h"

ComparaPersonasPorNombreYCedulaDescendente::ComparaPersonasPorNombreYCedulaDescendente()
{
}

	CompRetorno ComparaPersonasPorNombreYCedulaDescendente::Comparar(const Persona& p1, const Persona& p2) const
	{
		if (p1.Nombre() < p2.Nombre() || p1.Nombre() == p2.Nombre() && p1.CI() < p2.CI()) return MAYOR;
		if (p1.Nombre() > p2.Nombre() || p1.Nombre() == p2.Nombre() && p1.CI() > p2.CI()) return MENOR;
		if (p1.Nombre() == p2.Nombre() && p1.CI() == p2.CI()) return IGUALES;
		assert(false);
		return DISTINTOS;

	}

ComparaPersonasPorNombreYCedulaDescendente::~ComparaPersonasPorNombreYCedulaDescendente()
{
}
