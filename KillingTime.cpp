#include<iostream>
using namespace std;
int main()
{
	int time, money;
	
	cout << "how much time will your friend take to reach? " << endl;;
	cin >> time;
	if (time >= 15)
	{
		cout << "Ugh, Thats too much time , You got any money?" << endl;
		cin >> money;
		if (money > 5)
		{
			cout << "Nice! buy a drink till he reach" << endl;
		}
		else
		{
			cout << "Unfortunate! You can walk a around till he comes" << endl;
		}
	}
	else
	{
		cout << "Thats cool! wait for him then." << endl;
	}
	return 0;
}