#include<iostream>
using namespace std;
int main()
{
	float fahrenheit = 98.6; //Initializing Fahrenheit as float and giving it the value of 98.6

	float celcius; //Initializing Celsius as float

	cout << fahrenheit << " celcius is" << (fahrenheit - 32) * 5 / 9 << endl; // Using formula = (F-32)*5/9 to get value in celcius

	return 0;

}
