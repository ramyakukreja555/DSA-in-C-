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
int ncr(int n, int r)
{
    return factorial(n) / (factorial(r) * factorial(n - r));
}
int main()
{
    int n;
    cout << "Enter n:";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << ncr(i, j) << " ";
        }
        cout << endl;
    }
}