// WAP to copy the contents of one array into another in the reverse order
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
    int brr[5];
    for(int i=0; i<5; i++){
        brr[4-i]=arr[i];
    }  
    cout<<"The new array is: ";
    for(int i=0; i<5; i++){
        cout<<brr[i];
    } 
}