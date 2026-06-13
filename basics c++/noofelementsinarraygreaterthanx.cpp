// count the number of elements in given array greater than a given number x
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
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int count=0;
    for(int i=0; i<5; i++){
        if(arr[i]>n) count++;
        }
        cout<< count;
    }
