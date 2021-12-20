#include<iostream>
using namespace std;
int main()
{
	int a[1000],f=0;
	for (int i = 0; i < 1000; i++)
	{
		a[i] = rand() % 100;
		if (a[i] == 6)
		{
			f++;
		}
	}
	cout << "The number 6 appeared " << f << " times";
	return 0;
}
