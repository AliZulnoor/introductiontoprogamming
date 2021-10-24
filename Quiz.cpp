#include<iostream>
using namespace std;
int main()
{
	string n; // initializing value as string
	cout << "What is the capital of France?" << endl; //asking user a question and giving them choices 
	cout << "A:Dubai \n B:Lodon \n C:Bath \n D:Paris" << endl;
	cin >> n; // taking answer from the user
	if (n == 'D'|| n =='d') // checking answer
	{
		cout << "You are correct!" << endl;
	}
	else
	{
		cout << "thats the wrong answer" << endl;
	}
	return 0;
}
