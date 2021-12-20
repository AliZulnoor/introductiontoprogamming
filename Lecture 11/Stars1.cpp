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
}
