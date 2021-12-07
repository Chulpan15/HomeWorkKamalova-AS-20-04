#include "Algoritmy.h"

int& algoritmy::AlgoritmEvklida(int& x, int& y)
{
	// TODO: вставьте здесь оператор return
}

int& algoritmy::BinarniyAlgoritm(int& A, int& B)
{
	int k = 1;
	while ((A != 0) && (B != 0))
	{
		while ((A % 2 == 0) && (B % 2 == 0))
		{
			A /= 2;
			B /= 2;
			k *= 2;
		}

		while (A % 2 == 0) A /= 2;
		while (B % 2 == 0) B /= 2;

		if (A >= B) A -= B;
		else B -= A;
	}
	int result = B * k;
	return result;
}

int& algoritmy::RashirenniyAlgoritmEvklida(int& x, int& y)
{
	// TODO: вставьте здесь оператор return
}

int& algoritmy::AlgoritmLemmera(int& x, int& y)
{
	// TODO: вставьте здесь оператор return
}
