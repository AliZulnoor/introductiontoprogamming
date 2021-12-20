#include<iostream>
using namespace std;
int main()
{

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
