#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int low=0;
    int high=n-1;
    int ans=-1;
   
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            ans=mid;
            high=mid-1;
                
            
        if(arr[mid]<target) low=mid+1;
        if(arr[mid]>target) high=mid-1;


    }}
    
}