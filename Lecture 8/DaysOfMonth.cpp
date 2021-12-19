#include<iostream>
using namespace std;
int main()
{
	int month;
	cout << "Please enter a Number from 1-12: ";
	cin >> month;
	switch (month)
	{
	case 1:
	{
		cout << "There are 31 days in January" << endl;
		break;
	}
	case 2:
	{
		cout << "There are 28-29 days in February" << endl;
		break;
	}
	case 3:
	{
		cout << "There are 31 days in March" << endl;
		break;
	}
	case 4:
	{
		cout << "There are 30 days in April" << endl;
		break;
	}
	case 5:
	{
		cout << "There are 31 days in May" << endl;
		break;
	}
	case 6:
	{
		cout << "There are 30 days in June" << endl;
		break;
	}
	case 7:
	{
		cout << "There are 31 days in Jully" << endl;
		break;
	}
	case 8:
	{
		cout << "There are 31 days in August" << endl;
		break;
	}
	case 9:
	{
		cout << "There are 30 days in September" << endl;
		break;
	}
	case 10:
	{
		cout << "There are 31 days in October" << endl;
		break;
	}
	case 11:
	{
		cout << "There are 30 days in November" << endl;
		break;
	}
	case 12:
	{
		cout << "There are 31 days in December" << endl;
		break;
	}
	default:
		cout << "Please enter a number from 1-12" << endl;
	}
	return 0;


}