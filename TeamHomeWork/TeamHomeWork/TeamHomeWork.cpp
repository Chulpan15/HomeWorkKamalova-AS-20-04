#include <iostream>
#include <Windows.h>
#include <chrono>
#include "Algoritmy.h"

using namespace std;
using namespace algoritmy;

//Timer
class Timer
{
private:
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration < double, std::ratio <1>>;

	std::chrono::time_point <clock_t> start;

public:
	Timer() : start(clock_t::now())
	{

	}

	void reset()
	{
		start = clock_t::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast <second_t> (clock_t::now() - start).count();
	}

};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Timer t;

    cout << "Введите число A: ";
    int A;
    cin >> A;
    cout << "Введите число B: ";
    int B;
    cin >> B;

    double time1 = t.elapsed();
    cout << "Алгоритм Евклида, НОД: " << AlgoritmEvklida(A, B) << endl;
	cout << "Затраченное время: " << time1 << endl;
	double time2 = t.elapsed();
	cout << "Бинарный алгоритм, НОД: " << BinarniyAlgoritm(A, B) << endl;
	cout << "Затраченное время: " << time2 - time1 << endl;
	double time3 = t.elapsed();
	int x;
	int y;
	cout << "Расширенный алгоритм Евклида, НОД: " << RashirenniyAlgoritmEvklida(A,B,x,y) << endl;
	cout << "Затраченное время: " << time3 - time2 << endl;

}


