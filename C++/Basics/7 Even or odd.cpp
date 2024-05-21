#include <iostream>
using namespace std;

int main()
{
	int input = 2;
	cout << "enter a number: ";
	cin >> input;

	if (input % 2 == 0)
	{
		cout << input << " is even.\n";
	} else
	{
		cout << input << " is odd.\n";
	}
	return 0;
}
