#include "Algoritmy.h"

//Россев Миша
int& algoritmy::AlgoritmEvklida(int& A, int& B)
{
	while (A!=0 && B!=0)
	{
		if(A > B)
			A %= B;
		else
			B %= A;
	}
	int gcd = A + B;
	return gcd;
}

//Федорина Ирина
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

//Ивлев Лев
int& algoritmy::RashirenniyAlgoritmEvklida(int a, int b, int& x, int& y)
{
	/* a и b - числа, для которых мы ищем НОД, передаем по значению.
	х и у - переменные, в которые записываются найденные алгоритмом коэффициенты разложения
	(пустые переменные передаются передаются по ссылке */

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

//Россев Миша
//int& algoritmy::AlgoritmLemmera(int& A, int& B)
//{
//	// TODO: Вписать свой алгоритм
//}

