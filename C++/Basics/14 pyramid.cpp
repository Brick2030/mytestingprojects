#include <iostream>
using namespace std;

int main()
{
	int lines = 20;
	cout << "Enter num of lines: ";
	cin >> lines;	
	for (int y = 0; y < lines; y++)
	{
		for (int x = 0; x <= y; x++) 
		{
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}
