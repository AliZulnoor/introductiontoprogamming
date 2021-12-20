#include <iostream>
using namespace std;
int main()
{
	string password = "246"; 
	string userInput;
	while (userInput != password)
	{
		cout << "Enter the pass code for the safe" << endl;
		cin >> userInput;
	}
	cout << "You found the code";
  return 0;
}
