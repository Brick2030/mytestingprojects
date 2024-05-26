#include <iostream>
using namespace std;

int add(int);

int main()
{
	int input = 0;
	cout << "Enter numbers to summ starting from 1: ";
	cin >> input;
	cout << "Summ is " << add(input) << endl; 
}

int add(int n)
{
	if(n > 0) return n + add(n-1);
	return 0;
}
