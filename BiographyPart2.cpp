#include<iostream>
#include<string> // Including string library for getline function
using namespace std;
int main()
{
	string name; // Intializing name without giving it the value
	int age = 18;
	string home; // Intializing hometown without giving it the value

	cout << "Enter your full name: ";

	getline (cin, name); // Using getline function to take the full name as input
	cout << endl << "Enter your hometown: ";
	cin >> home;          // getting home name from user
	cout << endl << "Name: " << name << endl << "Age:  " << age << endl << "Hometown: " << home << endl; //printing name and home 
	return 0;
}