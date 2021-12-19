#include<iostream>
#include<string>
using namespace std;
int main()
{
	bool musician;//for true and false commands
	string a;
	string instrument;
	cout << "Hey! Do you play any musician instrument? (y/n): ";// asking user if they play any instruments
	cin >> a;
	if (a == "y" || a == "Y")// this will be executed if the answer is yes
	{
		musician = true;
	}
	else
	{
		musician = false;
	}
	if (musician == true) // if yes then this command will be executed too
	{
		cout << "Alright! What kind of insturment you play ? " << endl;  //asking the user about the their instrument and if that is needed
		cin >> instrument;
		if (instrument == "guitar" || instrument == "Guitar")
		{
			cout << "Nice, You can join the band." << endl;
		}
		else if (instrument == "drums" || instrument == "Drums")
		{
			cout << "Nice, You can join the band." << endl;
		}
		else
		{
			cout << "nah fam, I only need a guitarist or a drummer." << endl; // if the user entered other instrument than required this will be executed 
		}
	}
	else
	{
		cout << "oh, I really wanted to start a band." << endl;
	}
	return 0;
}
