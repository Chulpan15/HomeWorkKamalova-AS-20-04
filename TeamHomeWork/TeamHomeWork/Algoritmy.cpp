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
	// TODO: Вписать свой алгоритм
		string x_s, y_s, b_s,x1_s,y1_s;
		cin >> x_s >> y_s >> b_s;
		long long int x,x_l,y,y_l,b, x1, y1, q, q1, t, T, U;
		int A, B, C, D, m1, m2;
		x = stoll(x_s), y = stoll(y_s);
		while (y > b)
		{
            x_l=x,y_l=y;
            while(x_l>pow(10,b_s.length()))
            {
                x_l=x_l/pow(10,b_s.length());
                x1=x_l;
            }
            while(y_l>pow(10,b_s.length()))
            {
                y_l=y_l/pow(10,b_s.length());
                y1=y_l;
            }
			A = 1, B = 0, C = 0, D = 1;
			while (y1 + C != 0 && x1 + D != 0)
			{
				q = (x1 + A) / (y1 + C);
				q1 = (x1 + B) / (y1 + D);
				if (q == q1)
				{
					t = A - q * C;
					A = C;
					C = t;
					t = B - q * D;
					B = D;
					D = t;
					t = x1 - q * y1;
					x1 = y1;
					y1 = t;
				}
				if (q != q1) break;
			}
			if (B == 0)
			{
				T = x % y;
				x = y;
				y = T;
			}
			else
			{
				T = A * x + B * y;
				U = C * x + D * y;
				x = T;
				y = U;
			}
		}
		AlgoritmEvklida(x, y);
		return 0;
}

