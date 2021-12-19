#include<iostream>
using namespace std;
int main()
{
	int sides;  // initializing value as int
	cout << "Enter the number of sides: "; // asking user to enterr the number of sides
	cin >> sides;
	if (sides == 3) // comparing sides to give shape name
	{
		cout << "It's a Triangle" << endl;
	}
	else if (sides == 4)
	{
		cout << "It's a Quadrilateral" << endl;
	}
	else if (sides == 5)
	{
		cout << "It's a Pentagon" << endl;
	}
	else if (sides == 6)
	{
		cout << "It's a Hexagon" << endl;
	}
	else if (sides == 7)
	{
		cout << "It's a Heptagon" << endl;
	}
	else if (sides == 8)
	{
		cout << "It's a Octagon" << endl;
	}
	else if (sides == 9)
	{
		cout << "It's a Nontagon" << endl;
	}
	else if (sides == 10)
	{
		cout << "It's a Decagon" << endl;
	}
	else
	{
		cout << "Not a viable option" << endl;
	}
	return 0;
}
