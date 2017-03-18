#pragma once
#include "Comparacion.h"
class ComparaInt :public Comparacion<int>
{
public:
	ComparaInt();
	virtual CompRetorno Comparar(const int& p1, const int& p2) const;
	~ComparaInt();
};

