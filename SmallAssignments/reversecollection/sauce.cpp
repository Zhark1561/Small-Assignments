#include <iostream>

// Reverse Collection
int findLengthOf(char* string)
{
	bool foundLength{false};
	int length{0};
	while (!foundLength)
	{
		if (string[length] == 0)
		{
			foundLength = true;
		}
		else
		{
			length++;
		}
	}

	return length;
}
char* reverseString(char* string)
{
	int length{ findLengthOf(string)};
	char* reverse = new char[length];

	for (int i = 0; i < length; i++)
	{
		reverse[i] = string[length-1-i];
	}
	reverse[length] = 0;


	return reverse;
}
void main()
{
	char string[] = {'H', 'e', 'l', 'l', 'o', 0};
	
	std::cout << reverseString(string) << std::endl;

}