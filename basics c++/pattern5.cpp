#include <iostream>
using namespace std;
int main()
{
    char ch = 'A';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << ch;
        }
        ch = ch + 1;
        cout << "\n";
    }
}