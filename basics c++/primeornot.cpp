#include <iostream>
using namespace std;
int main()
{
    int n;
    int a = 0;
    cout << "Enter the number to check: ";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Number is not prime \n";
            a = 1;
            break;
        }
    }
    if (a != 1 && n != 1)
    {
        cout << "Number is prime \n";
    }
    else if (n == 1)
    {
        cout << "No is neither prime nor composite \n";
    }
    return 0;
}