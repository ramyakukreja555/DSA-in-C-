#include <iostream>
using namespace std;
int factorial(int n)
{
    int factorial = 1;
    for (int i = n; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    return factorial;
}
int main()
{
    int n;
    cout << "Enter the value of n";
    cin >> n;
    cout << "The factorial of the number is:" << factorial(n);
}