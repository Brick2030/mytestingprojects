#include<iostream>
using namespace std;

void reverse (const string& a);

int main()
{

	string str;
	cout << "Enter a string: \n";
	getline(cin, str);
	reverse(str);
	return 0;

	// I rewrote this code from a book, lmao I have no idea what is anything of that.
	// Im gonna practice strings and stuff later.
	// And actually it was interesting to see how it's different from python strings stuff.

}

void reverse(const string& str)
{
	size_t numOfChars = str.size();

	if(numOfChars == 1) cout << str << endl;
	else
	{
		cout << str[numOfChars-1];
		reverse(str.substr(0, numOfChars-1));
	}

}
