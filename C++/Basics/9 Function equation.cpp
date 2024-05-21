#include <iostream>
#include <cmath>
using namespace std;

// ax^2 + bx + c = 0
// d = b^2 - 4ac
void eq(float, float, float);

int main()
{
	float a = 0, b = 0, c = 0;
	cout << "ax^2 + bx + c = 0\nEnter a, b, c:\n";
	cin >> a >> b >> c;
	eq(a, b, c);


	return 0;	

}

void eq(float a, float b, float c)
{
	float x1 = 0, x2 = 0, realpart = 0, imaginarypart = 0, d = 0;
	d = (b*b) - 4 * (a * c);
	if (d > 0)
	{
		cout << "d > 0, x1 != x2: \n";
		x1 = (-b + sqrt(d)) / (2*a);
		x2 = (-b - sqrt(d)) / (2*a);
		cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;

	} else if (d == 0)
	{
		cout << "d == 0, x1 = x2: \n";
		x1 = (-b + sqrt(d)) / (2*a);
		cout << "x1 = x2 = " << x1 << endl;
	} else
	{
		realpart = -b/(2*a);
		imaginarypart = sqrt(-d)/(2*a);
		cout << "x1 and x2 are complex...\n";
		cout << "x1 = " << realpart << " + " << imaginarypart << "i" << endl;
		cout << "x2 = " << realpart << " - " << imaginarypart << "i" << endl;
	}

}
