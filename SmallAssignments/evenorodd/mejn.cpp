#include <iostream>

using namespace std;


// Even or Odd
int evenorodd(int n)
{
	return n % 2;
}
void main()
{
	int n{3};
	cout << "Number: ";
	cin >> n;

	if (evenorodd(n) == 0)
	{
		cout << n << " is an even number" << endl;
	}
	else if (evenorodd(n) == 1)
	{
		cout << n << " is an odd number" << endl;
	}
	
}