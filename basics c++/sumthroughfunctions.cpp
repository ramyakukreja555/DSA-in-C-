#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int main()
{
    int a;
    cout << "Enter first number";
    cin >> a;
    int b;
    cout << "Enter second number";
    cin >> b;
    cout << "The sum of the numbers is" << sum(a, b);
}