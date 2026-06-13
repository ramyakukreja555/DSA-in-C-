// difference between elements at even indicesto sum of elements at odd indices
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
    int sumodd=0;
    int sumeven=0;
    for(int i=0;i<5; i++){
        if(i%2==0) sumeven= sumeven+arr[i];
        else sumodd= sumodd+arr[i];
        
    }
    cout<<"The corresponding difference is:";
    cout<<sumeven-sumodd;
}