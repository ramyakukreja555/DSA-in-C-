#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        ch = 'A';
        cout << "\n";
    }
}