// checking if a given array is pallindrome or not
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the array elements: ";
    for (int i = 0; i <= 4; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is:";
    for (int i = 0; i <= 4; i++)
    {
        cout << arr[i] << " ";
    }
    bool palindrome = true;
    for (int i = 0; i < 5 / 2; i++)
    {
        if (arr[i] != arr[4 - i])
        {
            palindrome = false;
            break;
        }
    }
    if (palindrome)
        cout << "The given array is a palindrome";
    else
        cout << "The given array is not a palindrome";
}