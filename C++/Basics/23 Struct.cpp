// I have no ideas if structs are useful. But. Why not to practice them too idk;
#include <iostream>
using namespace std;

struct student
{

	char name[50];
	int roll;
	float mark;
};


int main()
{
	student s;
	cout << "Info about student: name, roll, mark:\n";
	cin >> s.name >> s.roll >> s.mark;

	cout << "Info:\n";
	printf("Name: %s\nRoll: %d\nMark: %f\n", s.name, s.roll, s.mark);
	// Im actually surprised that I wrote those % printf keys without mistakes and it works from the first time lol
	// Yee im cool aint i huh
	// (I wasnt coding in C maybe for 8 months. And I never actually was any better in C huh);
	return 0;


}

