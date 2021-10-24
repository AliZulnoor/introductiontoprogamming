
#include<iostream>
using namespace std;
int main()
{
	float height; //initializing height as float for accurate value
	int age; // age as int 
	cout << "Enter your age: ";//asking user to enter the age
	cin >> age;
	cout << "Enter yout height: ";// asking user to enter the height 
	cin >> height;
	if (age >= 5 && height > 0.6) // checking user's height and age 
	{
		cout << "You're eligible to ride." << endl;// this statement will be executed if matched the requirments
	}
	else
	{
		cout << "You aren't eligible to ride." << endl;// else this statment will be executed 
	}
	return 0;
}