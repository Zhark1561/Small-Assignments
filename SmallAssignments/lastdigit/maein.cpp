#include <iostream>

using namespace std;

// Last Digit of a Number
int lastdigit(int n)
{
	return n % 10;
}
void main()
{
	int n{ 137 };
	cout << "Number: ";
	cin >> n;

	cout << lastdigit(n) << endl;

}