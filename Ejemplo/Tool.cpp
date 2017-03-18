#include "Tool.h"



Tool::Tool()
{
}


Tool::~Tool()
{
}

bool Tool::Even(int a)
{
	return (a%2==0);
}

int Tool::MCD(int a, int b)
{
	int resto;
	while (b>0)
	{
		resto = a % b;
		a = b;
		b = resto;
	}
	return a;
}

int Tool::Potencia(int x, int n)
{
	if (n == 0)
		return 1;
	else
	{
		if (n == 1)
			return x;
		else
		{
			if (Even(n)) {
				return Potencia(x* x, n / 2);
			}
			else {
				return x*Potencia(x* x, n / 2);
			}
		}
	}
}
