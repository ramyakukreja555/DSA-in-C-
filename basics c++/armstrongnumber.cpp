#include <iostream>
#include <cmath>
// armstrong number
using namespace std;
int main()
{
    int num;

    cout << "Enter your number";
    cin >> num;
    int temp = num;
    int original = num;
    int count = 0, rem;
    while (num != 0)
    {
        rem = num % 10;
        count++;
        num = num / 10;
    }
    int sum = 0;
    while (temp != 0)
    {
        rem = temp % 10;
        sum = sum + pow(rem, count);
        temp = temp / 10;
    }
    if (original == sum)
    {
        cout << "The number is an armstrong number";
    }
    else
    {
        cout << "The number is not an armstrong number";
    }
}
