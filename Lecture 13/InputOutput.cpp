#include<iostream>
using namespace std;
int main()
{
	int a[6];
	for (int i = 1; i < 6; i++)
	{
		cout << "Please enter a number (" << i << ")" << endl;
		cin >> a[i];
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
			cout << "Please enter a number\nTry again("<<i<<")";
			cin >> a[i];
		}
	}
	cout << "\n";
	for (int i = 1; i < 6; i++)
	{
		cout << a[i] << endl;
	}
	return 0;
	
}
