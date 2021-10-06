#include<iostream>
#include<string> // Including string library for getline function
using namespace std;
int main()
{
	string name; // Intializing name without giving it the value
	int age = 19;
	string hometown; // Intializing hometown without giving it the value

	cout << "Enter your full name: ";

	getline (cin, name); // Using getline function to take the full name as input
	cout << endl << "Enter your hometown: ";
	cin >> hometown;
	cout << endl << "Name: " << name << endl << "Age:  " << age << endl << "Hometown: " << hometown << endl;
	return 0;
}