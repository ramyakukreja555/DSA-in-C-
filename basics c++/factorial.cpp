#include <iostream>
using namespace std;
int main()
{
    int n, factorial = 1;
    cout << "Enter your number";
    cin >> n;
    if (n == 0 || n == 1)
    {
        cout << "The factorial of a given number is 1";
    }
    for (int i = n; i > 0; i--)
    {
        factorial = factorial * i;
    }
    cout << factorial;
}