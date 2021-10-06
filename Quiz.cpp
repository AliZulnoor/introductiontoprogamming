#include<iostream>
using namespace std;
int main()
{
	string answer;
	cout << "What is the capital of France?" << endl;
	cin >> answer;
	for (int i = 0; i < answer.length(); i++)
	{
		answer[i] = tolower(answer[i]);
	}
	if (answer == "paris")
	{
		cout << "You are correct!" << endl;
	}
	else
	{
		cout << "You are incorrect!" << endl;
	}
	return 0;
}
