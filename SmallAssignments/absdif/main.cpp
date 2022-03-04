#include <iostream>

using namespace std;

// Absolute Difference
int absdif(int a, int b)
{
	if (a < 0)
	{
		a *= -1;
	}
	if (b < 0)
	{
		b *= -1;
	}
	return a + b;
}
int main()
{
	int a{-4};
	int b{6};

	cout << "Number A: ";
	cin >> a;
	cout << "Number B: ";
	cin >> b;
	cout << "Absolute Difference: " << absdif(a, b) << endl;


	return 0;
}