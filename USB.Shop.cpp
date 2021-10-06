#include<iostream>
using namespace std;
int main()
{
	int TotalMoney = 50, Price = 6; // Initializing total money and price of single usb
	
	cout << "She can buy " << TotalMoney / Price << " usb" << endl; // 50 / 6 = 8

	cout << "And she will have " << TotalMoney % Price << " pounds left" << endl; // 50 % 6 = 2

	return 0;

}
