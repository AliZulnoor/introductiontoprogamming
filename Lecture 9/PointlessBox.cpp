#include <iostream>
using namespace std;
int main()
{
    cout << "Enter a number either 1 or 2\n";
    int x; 
    cin >> x;
    while (x != 0 && x <= 2 && !cin.fail())
    {
        if (x == 1)
        {
            cout << "you have entered the number 1\n";
        }
        else
        {
            cout << "you have entered the number 2\n";
        }

        cout << "Enter a number either 1 or 2\n";
        cin >> x;
     
    }
cout << "You did not enter the number 1 or 2";
return 0;
}
