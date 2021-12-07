#include "Algoritmy.h"

int& algoritmy::AlgoritmEvklida(int& A, int& B)
{
	// TODO: âñòàâüòå çäåcü ñâîé àëãîðèòì
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

int& algoritmy::BinarniyAlgoritm(int& A, int& B)
{
	int NOD;
	int k = 1;
	if ((A == 0) || (B == 0))
		NOD = 0;
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

int& algoritmy::RashirenniyAlgoritmEvklida(int a, int b, int& x, int& y)
{
	/* a è b - ÷èñëà, äëÿ êîòîðûõ ìû èùåì ÍÎÄ, ïåðåäàåì ïî çíà÷åíèþ.
	x è y - ïåðåìåííûå, â êîòîðûå çàïèñûâàþòñÿ íàéäåííûå àëãîðèòìîì êîýôôèöèåíòû ðàçëîæåíèÿ
	(ïóñòûå ïåðåìåííûå ïåðåäàþòñÿ ïî ññûëêå */

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

//int& algoritmy::AlgoritmLemmera(int& A, int& B)
//{
//	// TODO: âñòàâüòå çäåñü ñâîé àëãîðèòì
//}

