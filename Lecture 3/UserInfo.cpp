#include<iostream>
#include<string>
using namespace std;
int main()
{
	string name,Plocation,Clocation;
	int age;
	cout << "Please enter your name: ";
	getline(cin,name);
	cout << "\nPlease enter your age: ";
	cin >> age;
	cout << "\nPlease enter your current address: ";
	cin>> Clocation;
	
	cout << "\nPlease enter your permenant address: ";
	cin>> Plocation;
	cout << "\nYour name: " << name << "\nYour age: " << age << "\nCurrent address: " << Clocation << "\nPermenant address: " << Plocation << endl;
	return 0;

}
