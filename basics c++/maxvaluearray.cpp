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
    cout << "The max of all the elements are: ";
    int mx= arr[0];
    for (int i = 1; i <= 4; i++)
    {  //if (arr[1]> mx) mx=arr[i];
        mx= max(mx,arr[i]);

    }     
    cout << mx;
}