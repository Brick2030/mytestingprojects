#include <iostream>
using namespace std;

int main()
{

	
	string input = "Hello world!";
	cout << "Enter string without spaces: ";
	cin >> input;
	cout << "Enter char to find: ";
	char findChar = 'l';

	cin >> findChar;
	int count = 0;

	for (int i = 0; i < input.size(); i++)
	{
		if (input[i] == findChar) count++;
	}

	cout << "Char " << findChar << " appeared " << count << " in the string\n";
	return 0;

}
