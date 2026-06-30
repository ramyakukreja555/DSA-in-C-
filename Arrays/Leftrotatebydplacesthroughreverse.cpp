#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int d;
    cin >> d;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    d = d % n;
    // to reverse
    //while(start<end){
       // int temp=arr[start];
       // arr[start]=arr[end];
       // arr[end]=temp;
        //start++;
       // end--;
    //}
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}