#include<iostream>
using namespace std;
int main()
{
	int PurchasePrice;
	int SalePrice;
	int checking;
	cout << "Enter the purchase price: ";
	cin >> PurchasePrice;
	cout << "Enter the sale price: ";
	cin >> SalePrice;
	checker = SalePrice - PurchasePrice; // Formula
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