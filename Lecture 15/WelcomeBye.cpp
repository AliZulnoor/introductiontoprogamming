#include <iostream>
#include <string>
#include <array>
#include <algorithm>
using namespace std;

void welcome();
void bye();

int main()
{
    welcome();
    bye();
    return 0;
}


void welcome()
{
    cout << "Welcome\n";
}

void bye()
{
    cout << "Goodbye\n";
}
