#include<iostream>
using namespace std;
int main()
{
	float c;
	float f;
	cout << "Please enter temperature in celsius: ";
		cin >> c;
	cout << "\nFahrenhit is : " << (c*9 / 5)  + 32 << endl; // (c*9/5)+ 32 is the formula to convert celcius into fahrenhit
	return 0;
}