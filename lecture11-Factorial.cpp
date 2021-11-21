#include<iostream>
using namespace std;
int main()
{

	int n, a = 1, b = 1;


	cout << "Enter The Number:" << endl;
	cin >> n;

	while (b <= n)
	{
		a = a * b;
		b++;
	}

	cout << "\n The Factorial of " << n << " is " << a;
}
