#include <iostream>
#include <stdio.h>


using namespace std;

// Swap
void main()
{
	int a{};
	int b{};
	int tempVal{};
	int* pointerA{ &a };
	int* pointerB{ &b };

	cout << "Number A: ";
	cin >> a;
	cout << "Number B: ";
	cin >> b;

	cout << "Number A before swap: " << a << endl;
	cout << "Number B before swap: " << b << endl;
	
	cout << "Swapping..." << endl;
	swap(a, b);

	cout << "Number A after swap: " << a << endl;
	cout << "Number B after swap: " << b << endl;

	cout << "Swapping again..." << endl;
	tempVal = a;
	a = b;
	b = tempVal;

	cout << "Number A after swap: " << a << endl;
	cout << "Number B after swap: " << b << endl;

	cout << "And another one..." << endl;
	tempVal = *pointerA;
	a = *pointerB;
	b = tempVal;

	cout << "Number A after swap: " << a << endl;
	cout << "Number B after swap: " << b << endl;


}