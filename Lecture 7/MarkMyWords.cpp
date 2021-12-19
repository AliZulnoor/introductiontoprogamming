#include<iostream>
using namespace std;
int main()
{
	int grade; //initializing grade as int
	cout << "Enter your grade: ";
	cin >> grade; //taking grades from user
	if (grade >= 70 && grade <= 100) //comparing grades to give the results
	{
		cout << "Your grade is A" << endl;
	}
	else if (grade >= 60 && grade <= 69)
	{
		cout << "Your grade is B" << endl;
	}
	else if (grade >= 50 && grade <= 59)
	{
		cout << "Your grade is C" << endl;
	}
	else if (grade >= 40 && grade <= 49)
	{
		cout << "Your grade is D" << endl;
	}
	else if (grade < 40 && grade >= 0)
	{
		cout << "Your grade is F" << endl;
	}
	else
	{
		cout << "Invalid number!" << endl;
	}
	return 0;
}
