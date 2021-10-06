#include<iostream>
#include<string>
using namespace std;
int main()
{
	bool musician;
	string answer;
	string instrument;
	cout << "Hey! Do you play any musician instrument? (y/n): ";
	cin >> answer;
	if (answer == "y")
	{
		musician = true;
	}
	else
	{
		musician = false;
	}
	if (musician == true)
	{
		cout << "Alright! What kind of insturment you play ? " << endl;
		cin >> instrument;
		if (instrument == "guitar")
		{
			cout << "Nice, You can join the band." << endl;
		}
		else if (instrument == "drums")
		{
			cout << "Nice, You can join the band." << endl;
		}
		else
		{
			cout << "nah fam, I only need a guitarist or a drummer." << endl;
		}
	}
	else
	{
		cout << "Aww man, I really wanted to start a band." << endl;
	}
	return 0;
}