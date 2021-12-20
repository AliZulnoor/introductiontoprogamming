#include<iostream>
using namespace std;
int main()
{
	char m[5][5] = { {'-','-','-','-','-'},{'-','O','-','O','-'},{'-','@','@','@','-'},{'-','^','^','^','-'},{'-','v','v','v','-'} }; 
	for (int i = 0; i < 5; i++) 
	{
		for (int j = 0; j < 5; j++) 
		{
			cout << m[i][j]; 
		}
		cout << endl;
	}
	return 0;
}
