#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;
int main()
{
	int m1{}, total{}, i{}, avg{};
	cout << "Please enter the marks of 5 subjects"<<endl;
	
	while (i< 5)
	{
		cin >> m1;
		while (cin.fail())
		{
			cout << "please enter a number"<< endl;
			cin.clear();
			cin.ignore(1000, '\n');
			cin >> m1;
            
		}
		if (m1 >= 0 && m1 <=100)
		{
			total = total + m1;
			i++;
		}
		else
		{
			cout << "please enter a number from 0 to 100" << endl;
		}
	}
	avg = total / 5;

	cout << "your total marks is:"<< total << endl;
	cout << "your average marks is:" << avg << endl;
	return 0;


}