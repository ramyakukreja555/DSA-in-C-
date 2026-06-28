#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maximum=arr[0];
    for(int i=0;i<n;i++){
        if (arr[i]>maximum){
            maximum=arr[i];
        }

    }
    int secondmaximum=INT_MIN;//OR SECONDMAXIMUM=-1
    for(int i=0;i<n;i++){
        if(arr[i]>secondmaximum){
            if(arr[i]!= maximum){
                secondmaximum=arr[i];
            }
        }
    }
    cout<<secondmaximum;
}