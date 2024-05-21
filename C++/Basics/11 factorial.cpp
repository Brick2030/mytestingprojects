#include <iostream>
using namespace std;

int main()
{

	unsigned int n = 0;
	unsigned long long factorial = 1; // Max for unsigned long long is factorial of 65.
	
	cin >> n;
	if (n > 65) 
	{ 
		cout << "Number cant be greater than 65.\n";
		return 0;
	}	

	for (int i = 1; i <= n; ++i)
	{
		factorial *= i;
	}	

	cout << "Factorial of " << n << " = " << factorial << endl;
	return 0;
}

