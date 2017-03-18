#include "ComparaInt.h"
#include <assert.h>


ComparaInt::ComparaInt()
{
}

CompRetorno ComparaInt::Comparar(const int & p1, const int & p2) const
{
	if (p1 < p2) return MENOR;
	if (p1 > p2) return MAYOR;
	if (p1 == p2) return IGUALES;
	assert(false);
	return DISTINTOS;
}


ComparaInt::~ComparaInt()
{
}
