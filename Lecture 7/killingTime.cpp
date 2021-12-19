#include<iostream>
using namespace std;
int main()
{
	int time, money; // initializing time and money as int
	
	cout << "how much time will your friend take to reach? " << endl; // asking time from user
	cin >> time;
	if (time >= 15)// comparing user given time with 15
	{
		cout << "Ugh, Thats too much time , You got any money?" << endl; // this statement will be exectued if the given time is more than 15 
		cin >> money;// taking money amount from user
		if (money > 5)
		{
			cout << "Nice! buy a drink till he reach" << endl; // this statement will be executed if given amount is more then 5
		}
		else
		{
			cout << "Sad! You can walk a around till he comes" << endl;
		}
	}
	else
	{
		cout << "Thats cool! wait for him then." << endl;
	}
	return 0;
}
