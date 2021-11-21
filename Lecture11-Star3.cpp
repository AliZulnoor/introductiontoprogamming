#include<iostream>
using namespace std;
int main()
{


	int c = 5;

	while (c >= 1)
	{
		c--;
		int d = 0;
		while (d <= c)
		{
			d++;
			cout << "*";

		}
		cout << endl;
	}

	int a = 1;

	while (a <= 5)
	{
		a++;
		int b = 1;
		while (b < a)
		{
			b++;
			cout << "*";

		}

		cout << endl;


	}
}
