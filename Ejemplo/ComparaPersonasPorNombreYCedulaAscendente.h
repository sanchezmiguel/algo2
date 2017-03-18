#pragma once
#include "Persona.h"
class ComparaPersonasPorNombreYCedulaAscendente :public Comparacion<Persona>
{
public:
	ComparaPersonasPorNombreYCedulaAscendente();
	virtual CompRetorno Comparar(const Persona& p1, const Persona& p2) const;
	~ComparaPersonasPorNombreYCedulaAscendente();
};

