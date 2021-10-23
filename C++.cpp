#include <iostream> 
#include <iomanip> 
#include "windows.h"
using namespace std;
int main()
{
	float  y, min, max, step;
	cout << "min=";
	cin >> min;
	cout << "max=";
	cin >> max;
	cout << "step=";
	cin >> step;//comment44444444444444444444444444
	do {
		
				y = pow(sin(min), 2) + 2 * cos(min) + 3;
		cout <<setw(10)<<"y=" << y << setw(10) <<"x="<< min << "\n";
		min += step;
//second_comment
//third_comment
	} while (min <= max);
}
