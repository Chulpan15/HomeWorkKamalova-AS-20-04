#include "Algoritmy.h"

int& algoritmy::AlgoritmEvklida(int& A, int& B)
{
	// TODO: вставьте здеcь свой алгоритм
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
	int NOD = B * k;
	return NOD;
}

int& algoritmy::RashirenniyAlgoritmEvklida(int a, int b, int& x, int& y)
{
	/* a и b - числа, для которых мы ищем НОД, передаем по значению.
	x и y - переменные, в которые записываются найденные алгоритмом коэффициенты разложения
	(пустые переменные передаются по ссылке */

	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = RashirenniyAlgoritmEvklida(b % a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

int& algoritmy::AlgoritmLemmera(int& A, int& B)
{
	// TODO: вставьте здесь свой алгоритм
}

