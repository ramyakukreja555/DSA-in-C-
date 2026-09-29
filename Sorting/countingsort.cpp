// sorting according to keys
// counting the elements having distinct key values
// upto some range...it is very hard if range goes to very big number
// the code given is for non negative integers
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi = arr[i];
        }
    }
     int k= maxi;
     int count[1000]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=maxi;i++){
        count[i]= count[i]+count[i-1];
    }
    int brr[n];
    for(int i=n-1;i>=0;i--){
        brr[--count[arr[i]]]= arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=brr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}