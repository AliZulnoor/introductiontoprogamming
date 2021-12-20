#include<iostream>
using namespace std;
int main()
{
	int	i, j,a,b;
	for (i = 1; i <= 5; i++)
	{
		
		for (j = 1; j <= i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	for (a = 1; a < 5; a++)
	{

		for (b = a; b < 5; b++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}