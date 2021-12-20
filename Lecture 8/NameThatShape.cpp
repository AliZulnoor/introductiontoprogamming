#include<iostream>
using namespace std;
int main()
{
	int side;
	cout << "Enter the sides number to see the shape name (minimum 3 sides, maximum 10) \n";
	cin >> side;
	switch (side)
	{
	
	case 1:
	case 2:
	{ cout << "The minimum side required is 3, you have entered less than the requirement" << endl; break; }
	case 3:
	{ cout << "Triangle  has " << side << " sides" << endl;
		break;
	}
	case 4:
	{ cout << "Square | Rectangle has " << side << " sides" << endl;
		break;
	}
	case 5:
	{cout << "Pentagon has " << side << " sides" << endl;
		break;
	}
	case 6:
	{ cout << "Hexagon has " << side << " sides" << endl;
		break;
	}
	case 7:
	{ cout << "Heptagon has " << side << " sides" << endl;
		break;
	}
	case 8: 
	{ cout << "Octagon has " << side << " sides" << endl;
		break;
	}
	case 9:
	{ cout << "Nonagon has " << side << " sides" << endl;
		break;
	}
	case 10:
	{ cout << "Decagon has " << side << " sides" << endl;
		break;
	}
	default:
	{
		cout << "Incorrect command" << endl;
		break;
	}

	}

	
}
