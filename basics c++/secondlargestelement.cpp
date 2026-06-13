#include <iostream>
using namespace std;
// int mn = INT_MAX;
// int mx = INT_MIN;
int main()
{
    int arr[5];
    cout << "Enter the array elements :" <<endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "The array is" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    int mx= INT_MIN;
    for(int i=0;  i<5; i++){
        mx=max(mx,arr[i]);

    }
    int smax= INT_MIN;
    for(int i=0; i<5; i++){
        if(arr[i]!=mx) smax= max(smax, arr[i]);
    }
    cout<<"The second largest element in the array is: ";
    cout<<smax;
}