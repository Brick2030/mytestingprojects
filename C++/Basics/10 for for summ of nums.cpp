#include <iostream>
using namespace std;

int main()
{
	int input = 2, output = 0;
	cout << "Enter number for summ: \n";
	cin >> input;
	for (int i = 1; i <= input; ++i)
	{
		output += i;
	}
	cout << "Summ is " << output << endl;
	return 0;
}
