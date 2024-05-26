#include <iostream>
using namespace std;

int main()
{
	int i = 1;
	float array[100]; array[0] = 0;
	
	for(i; i < 100; i++)
	{

		cout << "Enter array's object or \"-1\" to stop: ";
		cin >> array[i];
		if (array[i] == -1) break;

		if (array[0] < array[i]) array[0] = array[i];


	
	}

	cout << "Max is " << array[0] << endl;


}
