#include<iostream>
using namespace std;
int main()
{
	int age = 18; // declaring a variable age with the value of 18.

	if (age >= 18) // if age is greater than 18 
	{
		cout << "Yes! You can vote." << endl;
	}
	else // if age is less than 18 
	{
		cout << "No! You can't vote." << endl;
	}
	cin.get(); 

	return 0;
}
