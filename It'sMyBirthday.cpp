#include<iostream>
using namespace std;
int main()
{
	bool myBirthday = true; // declaring a variable named myBirthday with data type bool
	int age = 18; // declaring a variable named age with data type int

	if (myBirthday == true) // if statement will be executed if the value of myBirthday is true
	{
		age++; // age + 1
		cout << "It is my birthday. I am " << age << " years old";
	}
	else // else statement will be executed if the value of myBirthday is false
	{
		cout << "It is not my birthday" << endl; 
	}
	return 0;
}