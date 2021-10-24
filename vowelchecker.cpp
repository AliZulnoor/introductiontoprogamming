#include <iostream>
using namespace std;
int main()
{
	char vowel;
	cout << "please enter a vowel" << endl; //asking user to input a vowel
	cin >> vowel;


	
	 if (!isalpha(vowel)) // checking the given input is an alphabet or not
	{

		cout << "incorrect"; // if not then this statement will be executed
	}



	else if (vowel == 'a' || vowel == 'A' || vowel == 'e' || vowel == 'E' || vowel == 'i' || vowel == 'I' || vowel == 'o' || vowel == 'O' || vowel == 'u' || vowel == 'U') // checking if the entered value is a vowel or not
	{

		cout << "its a vowel" << endl; // this statement will be execute if its a vowel
	}


	else
	 {
		 cout << "its a conconant" << endl; // this statement will be executed if its not a vowel 
	 }
	return 0;
}