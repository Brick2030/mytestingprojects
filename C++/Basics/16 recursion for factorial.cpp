#include <iostream>
using namespace std;

// For recursion it's important to have proper exit condition to avoid having loop.
// In recursion function calls itself.

int factorial(int);

int main()
{

	int n;
	cout << "Enter a number: ";
	cin >> n;

	cout << "Factorial of " << n << " = " << factorial(n) << endl;
	return 0;
	
}

int factorial(int n)
{

	if(n>1) return n * factorial(n-1);
	else return 1;

}

