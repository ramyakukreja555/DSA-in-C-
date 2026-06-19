#include<iostream>
using namespace std;
void reversearray(int arr[], int start,int end){
    if(start>=end) return;
    swap(arr[start],arr[end]);
    reversearray(arr,start+1,end-1);
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    reversearray(arr,0,n-1);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }



}