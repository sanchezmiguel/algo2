#pragma once
#include "Persona.h"

class ComparaPersonasPorNombreYCedulaDescendente :public Comparacion<Persona>
{
public:
	ComparaPersonasPorNombreYCedulaDescendente();
 
	virtual CompRetorno Comparar(const Persona& p1, const Persona& p2) const;
	
	~ComparaPersonasPorNombreYCedulaDescendente();
};

