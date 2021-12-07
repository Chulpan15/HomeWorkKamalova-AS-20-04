#include <iostream>
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
cout << "Enter number A: ";
int A;
cin >> A;
cout << "Enter number B: ";
int B;
cin >> B;
 


}


