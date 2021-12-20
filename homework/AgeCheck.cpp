#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "please enter your age(NOT LESS THEN 10):" << endl;
	cin >> age;
	if (age >= 10)
	{
		if (age >= 10 && age <= 12)
		{
			cout << "Preteen Age" << endl;
		}
		else if (age >= 13 && age <= 19)
		{
			cout << "Teen Age" << endl;
		}
		else if (age >= 20 && age <= 29)
		{
			cout << "Twenties" << endl;
		}
		else if (age >= 30 && age <= 39)
		{
			cout << "Thirties" << endl;
		}
		else if (age >= 40 && age <= 49)
		{
			cout << "Fourties" << endl;
		}
		else if (age >= 50 && age <= 59)
		{
			cout << "Fifties" << endl;
		}
		else
		{
			cout << "Sixties or above" << endl;
		}
	}
	else
	{
		cout << "please enter your age(NOT LESS THEN 10):" << endl;
	}
	return 0;
}
