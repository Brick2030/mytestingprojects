#include <iostream>
using namespace std;

int main()
{
	int i = 0, j =0;

	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j<=9; j++) {
		cout.width(2); 
		cout << i*j << " ";
		}
		cout << endl;
	}
	return 0;
}
