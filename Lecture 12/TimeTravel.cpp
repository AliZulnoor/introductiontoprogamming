#include<iostream>
using namespace std;
int main()
{
	string i[] = { "january","febraury","march","april","may", "june", "july", "august", "september", "october", "november", "december" };
	for (int a = 1; a < 12; a++)
	{
		cout << "\n|" << i[a] << "|" << endl;
		
	}
	return 0;
}
