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
    cout << "The sum of all the elements are: ";
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        sum = sum + arr[i];
    }
    cout << sum;
}