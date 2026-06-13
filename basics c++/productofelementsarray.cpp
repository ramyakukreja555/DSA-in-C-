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
    cout << "The product of all the elements are: ";
    int product=1;
    for (int i = 0; i <= 4; i++)
    {
        product = product*arr[i];
    }
    cout << product;
}