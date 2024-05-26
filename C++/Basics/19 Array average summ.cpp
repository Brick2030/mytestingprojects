#include <iostream>
using namespace std;

int main()
{

	int object, i = 1;
	float num[100], sum=0.0, average=0.0;


	for (i; i <= 100; i++)
	{
		cout << "Enter array object or stop by typing 0\n";	
		cin >> num[i]; // Seems it's possible to have input right into the array
		
		if (num[i] == 0) break;
		sum += num[i]; // Calculating sum right in the loop for optimizing.
			

		
	}
	
	average = sum / (i-1); // i - 1 bc last object is zero, that is used for stopping loop.
	cout << "Average of your numbers is: " << average << endl;	

}
