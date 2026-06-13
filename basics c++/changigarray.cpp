// given array of integers, change the value of all odd indexed elements to its
// second multiple and increment all even indexed value by 10
#include<iostream>
using namespace std;
int main(){
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
    for(int i=0; i<5; i++){
        if(i%2==0) arr[i]= arr[i]+10;
        else arr[i]=arr[i]*2;
    }
    cout << "The array is:";
    for (int i = 0; i <= 4; i++)
    {
        cout<<arr[i]<<" ";
    }

}