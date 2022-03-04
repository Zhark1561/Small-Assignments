#include <iostream>

using namespace std;

// Celcius to Fahrenheit
double c2f(double a)
{
	a *= 1.8;
	a += 32;
	
	return a;
}
int main()
{
	double a{36};
	cout << "Celsius: ";
	cin >> a;
	if (a < 1)
	{
		a *= 100;
	}
	cout << a << " degrees Celsius is " << c2f(a) << " degrees Fahrenheit" << endl;


	return 0;
}