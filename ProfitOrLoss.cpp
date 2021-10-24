#include<iostream>
using namespace std;
int main()
{
	int Purchase, Sale, checking; //initializing values as int
	cout << "Enter the purchase price: "; // asking user to enter purchase price
	cin >> Purchase;
	cout << "Enter the sale price: ";// asking user to enter slae price
	cin >> Sale;
	checker = Sale - Purchase; // Formula
	if (checking > 0) // For profit
	{
		cout << "Profit: " << checker << endl;
	}
	else if (checking < 0) // For loss
	{
		cout << "Loss: " << checking << endl;
	}
	else // If there isn't any profit or loss
	{
		cout << "No loss. No profit." << endl;
	}
	return 0;
}