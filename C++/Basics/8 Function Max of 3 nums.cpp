#include <iostream>
using namespace std;

int maxof3(int, int, int); // Declaration of function for compiler to be able to use it in main().

int main()
{
	int aa = 0, bb = 0, cc = 0;
	cout << "Enter 3 numbers:\n";
	cin >> aa >> bb >> cc;
	cout << "max is " << maxof3(aa, bb, cc) << endl;

	return 0;
}


int maxof3(int a, int b, int c)
{
	if (a > b && a > c) return a;
	if (b > a && b > c) return b;
	if (c > a && c > b) return c;

	return -1;
}


