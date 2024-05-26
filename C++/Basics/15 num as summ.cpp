#include <iostream>
using namespace std;

bool checkPrime(int);

int main()
{
	int n = 0, i = 0;
	bool flag = false;
	cout << "Write number >= 0: ";
	cin >> n;


	for (i = 2; i <= n/2; ++i)
	{
		if(checkPrime(i))
		{
			if (checkPrime(n-i))
			{
				cout << n << " = " << i << " + " << n-i << endl;
				flag = true;
			}
		}
	}
	
	if (!flag) 
	{
		cout << n << "Cant be represented as summ of 2 numbers...\n";
	}
	return 0;
}

bool checkPrime(int n)
{
	int i;
	bool isPrime = true;

	for(i = 2; i <= n/2; ++i)
	{
		if (n % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	return isPrime;


}




