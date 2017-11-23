#include<iostream>
#include"CIrcle.h"
using namespace std;

int main()
{
	Circle c1(5);
	Circle c2(5);
	Circle c3(3);
	Circle c4(10);
	Circle c5(1);

	cout << boolalpha;

	// Test '=='
	if (c1 == c2)
		cout << " '==' works" << endl;

	// Test '>'
	if (c1 > c3)
		cout << " '>' works" << endl;

	// Test '<'
	if (c5 < c4)
		cout << " '<' works" << endl;

	// Test ALL ASPECTS of '>='
	if (c1 >= c5 && c1 >= c2)
		cout << " '>=' works" << endl;
	
	// Test ALL ASPECTS of '<='
	if (c1 <= c4 && c1 <= c2)
		cout << " '<=' works" << endl;

	// Test '!='
	if (c5 != c4)
		cout << " '!=' works" << endl << endl;

	// Print number of circles
	cout << "There are " << Circle::getNumberOfObjects() << " circles." << endl << endl;

	return 0;
}