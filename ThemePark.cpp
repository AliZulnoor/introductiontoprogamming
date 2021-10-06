// Chapter 2 Exercise 9
#include<iostream>
using namespace std;
int main()
{
	float height;
	int age;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter yout height: ";
	cin >> height;
	if (age >= 5 && height > 0.6)
	{
		cout << "You're eligible to ride." << endl;
	}
	else
	{
		cout << "You aren't eligible to ride." << endl;
	}
	return 0;
}