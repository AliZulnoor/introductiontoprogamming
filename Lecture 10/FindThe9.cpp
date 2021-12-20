#include<iostream>
using namespace std;
int main()
{
	int i, sum=0;
	for (i = 100; i <= 200; i++)
	{
		if (i % 9 == 0)
		{
			sum += i;
		}
	}
	cout << "The sum off all the possible integers that are divisible by 9: " << sum<<endl;
	return 0;
}
