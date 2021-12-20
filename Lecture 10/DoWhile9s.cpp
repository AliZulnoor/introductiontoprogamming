#include<iostream>
using namespace std;
int main()
{
	int i=1,sum=0;
	cout << "The numbers are " << endl;
	cout << "-----------------------" << endl;
	do
	{
		if (i % 9 == 0)
		{
			cout << "|"<<i <<"|"<< endl;
			sum += i;
		}
		i++;
	} while (i <= 200);
	cout << "-----------------------" << endl;
		cout << "The sum of possible integers devided by 9 is: " << sum << endl;
	return 0;
}