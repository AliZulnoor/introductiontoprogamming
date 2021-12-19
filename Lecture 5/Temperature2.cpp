#include<iostream>
using namespace std;
int main()
{
	float fahrenheit; //Initializing Fahrenheit as float 

	float celcius; //Initializing Celsius as float

	cout << "Enter the temperature in fahrenheit: " ;

	cin >> fahrenheit; // Taking the temperature in Fahrenheit as input from the user

	cout << fahrenheit << " celcius is " << (fahrenheit - 32) * 5 / 9  << endl; // Formula = (F-32)*5/9 to change the temperature into celcius

	return 0;
}
