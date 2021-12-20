#include <iostream>
using namespace std;
int main()
{
    cout << "What is the capital of France? Select the option from below\n";
    cout << "\n Enter 'P' for Paris";
    cout << "\n Enter 'D' for Dubai";
    cout << "\n Enter 'N' if you don't know\n";
    char capital;
    cin >> capital;
    switch (capital)
    {
    case 'P':
    case 'p':
    {
        cout << "You're right, the capital of France is Paris" << endl;
        break;
    }
    case 'd':
    case 'D':
    {
        cout << "You're wrong, the capital of France is Paris not Dubai " << endl;
        break;
      }
    case 'n':
    case 'N':
    {
        cout << "The capital of France is Paris" << endl;
        break; 
    }
    default:
    {
        cout << "Incorrect command";

    }
    }

    return 0;
}
