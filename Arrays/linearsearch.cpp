#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int number;
    cout << "Enter the element to search";
    cin >> number;
    bool present = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            present = true;
            break;
        }
    }
    if (present)
    {
        cout << "Element is present in the array";
    }
    else
    {
        cout << "Element is not present in the array";
    }
}