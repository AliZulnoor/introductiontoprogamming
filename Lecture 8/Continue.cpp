#include <iostream>
using namespace std;
int main() {
	cout << "Would you like to continue? (Y/N): "; //asking user to chooes
	char a; //variable for user input
	cin >> a; //getting user input
		switch (a)
		{ 
		case 'Y': 
		case 'y'://for case y
		{
			cout << "Going to Round 2" << endl;//this will execute if user chooses y(continue)
			break;
		}
		case 'N':
		case 'n'://for case n
		{
			cout << "Quiting now!" << endl;//this will execute if user chooses n(quit)
			break;
		}
			default: //for invalid inputs
			{
				cout << "Please enter only Y or N" << endl;
				
			}
		}
	return 0;
}