#include<iostream>
using namespace std;
int main()
{
	float  temp;
	char type;
	cout << "Please enter Temperature: " ;
	cin >> temp;
	cout << "Please choose temperature to convert to \n c:Celsius\t f:Fahrenhit" << endl;
	cin >> type;
	switch (type)
	{
	case 'c':
	case 'C':
	{
		cout << "\nThe temperature is " << (temp - 32) * 5 / 9 << " in Celsius" << endl;
		break;
	}
	case 'f':
	case 'F':
	{
		cout << "\nThe temperature is " << (temp * 9 / 5) + 32 << " in Fahrenheit" << endl;
		break;
	}
	default:
	{
		cout << "please enter c or f" << endl;
	}
	}
	return 0;

}