#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	int liters{}, literss{}; // assigning liters and literss as int 
	char a;                  // assigning a as char
	cout << "please input your fuel p/d:" << endl;         //asking user to choose between p or d
	cin >> a;                   // taking user input in a 
	switch (a)                    //checking the use input in a 
	{
	case 'p':                    //if p or P then the following commands will be executed
	case 'P':
	{
		cout << "how many liters you want" << endl;
		cin >> literss;                   //taking liters amount from user
		break;
	}
	case 'd':                    // if d or D then the following commands will be executed 
	case 'D':
	{
		cout << "how many liters you want" << endl;
		cin >> liters;                  //taking diesel liters amount from user
		break;
	}
	default:
	{
		       break;
	}
	}
	if (literss)                          //if they chose P or p the following commands will be executed
	{
		isdigit(literss);                 // checking if the value entered in literss are digits or not
			cout << "your value is: " << literss * 3 << endl;        //if they are digit this command will be executed 
	}
	else if (liters)                      // if they chose D or d the follwing commands will be executed 
	{
		isdigit(liters);                 //checking if the value entered in liters are digits or not
			cout << "your value is: " << liters * 2 << endl;            //if they are digit this command will be executed 
	}
	else 
	{
		cout << "please enter the correct value" << endl;           // if not digit then this command will be executed 
	}

	return 0;
}

