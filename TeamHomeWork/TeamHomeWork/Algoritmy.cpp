#include "Algoritmy.h"

int& algoritmy::AlgoritmEvklida(int& A, int& B)
{
	// TODO: �������� ���c� ���� ��������
}

int& algoritmy::BinarniyAlgoritm(int& A, int& B)
{
	// TODO: �������� ���c� ���� ��������
}

int& algoritmy::RashirenniyAlgoritmEvklida(int a, int b, int& x, int& y)
{
	/* a � b - �����, ��� ������� �� ���� ���, �������� �� ��������.
	x � y - ����������, � ������� ������������ ��������� ���������� ������������ ����������
	(������ ���������� ���������� �� ������ */

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
	// TODO: �������� ����� ���� ��������
}

