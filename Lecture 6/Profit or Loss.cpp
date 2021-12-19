#include<iostream>
using namespace std;
int main()
{
	int Purchase, Sale, check; //initializing values as int
	cout << "Enter the purchase price: "; // asking user to enter purchase price
	cin >> Purchase;
	cout << "Enter the sale price: ";// asking user to enter sale price
	cin >> Sale;
	checker = Sale - Purchase; // Formula
	if (check > 0) // for profit
	{
		cout << "Profit is: " << checker << endl;
	}
	else if (check < 0) // for loss
	{
		cout << "Loss is: " << checking << endl;
	}
	else // if there isn't any profit or loss
	{
		cout << "Neither loss nor profit" << endl;
	}
	return 0;
}
