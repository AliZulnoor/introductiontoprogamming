#include<iostream>
using namespace std;
int main()
{
	float mangitude; // taking magnitude as float
	cout << "please enter the mangitude of the earthquake: "; //asking magnitude from user
	cin >> mangitude;
	if (mangitude < 2.0 && mangitude > 0.0)// comparing
	{
		cout << mangitude << " it is considered to be a micro earthquake." << endl;
	}
	else if (mangitude < 3.0 && mangitude > 2.0)
	{
		cout << mangitude << " it is considered to be a very minor earthquake." << endl;
	}
	else if (mangitude < 4.0 && mangitude > 3.0)
	{
		cout << mangitude << " it is considered to be a minor earthquake." << endl;
	}
	else if (mangitude < 5.0 && mangitude > 4.0)
	{
		cout << mangitude << " it is considered to be a light earthquake." << endl;
	}
	else if (mangitude < 6.0 && mangitude > 5.0)
	{
		cout << mangitude << " it is considered to be a moderate earthquake." << endl;
	}
	else if (mangitude < 7.0 && mangitude > 6.0)
	{
		cout << mangitude << " it is considered to be a strong earthquake." << endl;
	}
	else if (mangitude < 8.0 && mangitude > 7.0)
	{
		cout << mangitude << " it is considered to be a major earthquake." << endl;
	}
	else if (mangitude < 10.0 && mangitude > 8.0)
	{
		cout << mangitude << " it is considered to be a great earthquake." << endl;
	}
	else if ( mangitude > 10.0)
	{
		cout << mangitude << " it is considered to be a meteoric earthquake." << endl;
	}
	else 
	{
		cout << "You entered an invalid value" << endl;
	}
	return 0;
}
