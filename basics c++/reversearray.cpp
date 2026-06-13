// If asked to reverse an array, they usually mean modify the array itself, not just print it backwards
// so can't apply loops in reverse order
#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the array elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5 / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }
    cout << "Reversed array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
}