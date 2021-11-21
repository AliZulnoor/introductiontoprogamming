#include<iostream>
using namespace std;
int main()
{
	for (int a = 20; a <= 24; a++)
		if (a % 2 == 0)
		{
			cout << a << "\teven" << endl;
		}
		else
		{
			cout << a << "\todd" << endl;
		}
	return 0;
}
