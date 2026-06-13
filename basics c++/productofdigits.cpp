#include <iostream>
using namespace std;
int main()
{
    int num, product = 1, rem;
    cout << "Enter a number";
    cin >> num;
    while (num != 0)
    {
        rem = num % 10;
        product = product * rem;
        num = num / 10;
    }
    cout << product;
    return 0;
}