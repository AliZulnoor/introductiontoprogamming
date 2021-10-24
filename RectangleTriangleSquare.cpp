#include<iostream>
using namespace std;
int main()
{
	float tri, sq, rect, a, w; //initializing values as float for accurate answers
	cout << "Enter the lenght: "; //asking lenght from user
	cin >> a;
	cout << "Enter the width: "; // asking width from user
	cin >> w;
	tri = a * w * 0.5; // calculations for triangle
	rect = a * w; // calculations for rectangle
	sq= a * a; // calculations for square
	cout << "The area of the rectangle is : " << rect << endl;
	cout << "The area of the triangle is : " << tri << endl;
	cout << "The area of the square is : " << sq << endl;
	return 0;
}