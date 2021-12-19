//Chapter: 1 Exercise: 8
#include<iostream>
using namespace std;
int main()
{
	int area ,  circumference , radius; //Initializing area, circumfrance , radius with integer

	cout << "Enter the radius of the circle: " ; //asking user to input radius
	cin >> radius; // taking radius from user
	cout << "The Area of the circle is: " << (22 / 7) * radius * radius << endl; // Area = (22/7)r^2
	cout << "The Circumference of the circle is: " << 2 * (22 / 7) * radius << endl; // Circumference = 2(22/7)r
	return 0;
}
