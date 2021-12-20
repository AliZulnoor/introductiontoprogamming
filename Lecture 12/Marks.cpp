#include<iostream>
using namespace std;
int main()
{
	float a[6], total=0;
	float avg;
	int i = 1;
	do
	{
		cout << "Please enter marks for subject " << i << endl;
		cin >> a[i];
		while (cin.fail())
		{
			cin.clear();
			cin.ignore(1000, '\n');
				cout << "Please enter your marks in numbers\n Subject " << i<<" : ";
				cin >> a[i];
		}
		total += a[i];
		i++;
		
	} while (i < 6);
	avg = total / 5;
	cout << "The average of your marks is: " << avg << endl;
	return 0;
}
