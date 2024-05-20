#include <iostream>
using namespace std;

int main()
{
	int first = 0, second = 0, temp = 0;

	cout << "Enter 2 numbers to switch:\n";
	cin >> first >> second;
	temp = first;
	first = second;
	second = temp;
	
	cout << "First number now is " << first << " and second number is " << second << endl;
	return 0;

}
