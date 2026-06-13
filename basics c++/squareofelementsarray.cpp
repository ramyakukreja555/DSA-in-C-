#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"The array elements are: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"The array after the square of all the elements:";
    for(int i=0; i<n;i++){
        cout<<arr[i]*arr[i]<<" ";
    }
}