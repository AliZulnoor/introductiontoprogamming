#include<iostream>
using namespace std;
int main()
{
	float triangle, square, rectangle, a, w;
	cout << "Enter the lenght: ";
	cin >> a;
	cout << "Enter the width: ";
	cin >> w;
	triangle = a * w * 0.5;
	rectangle = a * w;
	square = a * a;
	cout << "The area of the rectangle is : " << rectangle << endl;
	cout << "The area of the triangle is : " << triangle << endl;
	cout << "The area of the square is : " << square << endl;
	return 0;
}