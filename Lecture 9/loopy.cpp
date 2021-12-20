#include <iostream>  
using namespace std; 
int main() {

	int myInt = 0, counter;
	cout << "Enter a number\n";
	cin >> counter;
	do
	{
		cout << myInt << endl;
		myInt++;

	} while (myInt<=counter);
return 0;
}
