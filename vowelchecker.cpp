#include <iostream>
using namespace std;
int main()
{
	char vowel;
	cout << "please enter a vowel" << endl;
	cin >> vowel;


	
	 if (!isalpha(vowel))
	{

		cout << "incorrect";
	}



	else if (vowel == 'a' || vowel == 'A' || vowel == 'e' || vowel == 'E' || vowel == 'i' || vowel == 'I' || vowel == 'o' || vowel == 'O' || vowel == 'u' || vowel == 'U')
	{

		cout << "its a vowel" << endl;
	}


	else
	 {
		 cout << "its a conconant" << endl;
	 }
	return 0;
}