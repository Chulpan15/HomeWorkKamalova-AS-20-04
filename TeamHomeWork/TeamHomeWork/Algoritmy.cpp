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
	int NOD;
	int k = 1;
	if (A == 0)
		NOD = B;
	else if (B == 0)
		NOD = A;
	else
	{
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
		NOD = B * k;
	}
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
int& algoritmy::AlgoritmLemmera(int& A, int& B)
{
		int x_l,y_l,b=103, x1, y1, q, q1, t, T, U;
		int ko_A, ko_B, C, D, intX, intY;
		if(A<=B) swap(A,B);
		while (B > b)
		{
            x_l=A,y_l=B;
            while(x_l>pow(10,3))
            {
                x_l=x_l/pow(10,3);
                x1=x_l;
            }
            while(y_l>pow(10,3))
            {
                y_l=y_l/pow(10,3);
                y1=y_l;
            }
			ko_A = 1, ko_B = 0, C = 0, D = 1;
			while (y1 + C != 0 && x1 + D != 0)
			{
				q = (x1 + ko_A) / (y1 + C);
				q1 = (x1 + ko_B) / (y1 + D);
				if (q == q1)
				{
					t = ko_A - q * C;
					ko_A = C;
					C = t;
					t = ko_B - q * D;
					ko_B = D;
					D = t;
					t = x1 - q * y1;
					x1 = y1;
					y1 = t;
				}
				if (q != q1) break;
			}
			if (ko_B == 0)
			{
				T = A % B;
				A = B;
				B = T;
			}
			else
			{
				T = ko_A * A + ko_B * B;
				U = C * A + D * B;
				A = T;
				B = U;
			}
		}
		intX=A, intY=B;
		int gcd = AlgoritmEvklida(intX, intY);
		return gcd;
}

