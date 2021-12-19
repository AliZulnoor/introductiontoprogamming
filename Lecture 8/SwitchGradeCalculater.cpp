#include<iostream>
#include<string>
using namespace std;
int main()
{
	int grade;
	string name;
	cout << "Please enter your full name: ";
	getline(cin, name);
	cout << "\nPlease enter your marks: ";
	cin >> grade;
	if (grade <= 100 && grade >= 0)
	{
		switch (grade / 10)
		{
		case 10: case 9: case 8:
		{
			cout << "Congrats " << name << ",you got Grade A" << endl;
			break;
		}
		case 7:
		{
			cout << "Great " << name << ", you got Grade B" << endl;
			break;
		}
		case 6:
		{
			cout << "Good " << name << ", you got Grade C" << endl;
			break;
		}
		case 5:
		{
			cout << "Fair work " << name << ", you got Grade D" << endl;
			break;
		}
		case 4:
		{
			cout << name << " You just passed! with grade E" << endl;
			break;
		}
		default:
		{
			cout << "Hey " << name << " sad news! You FAILED!" << endl;
			break;
		}
		}
	}
	else
		cout << "Please enter values from 0-100";
	return 0;
	

}