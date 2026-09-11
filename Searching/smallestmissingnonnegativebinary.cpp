/* given a sorted array of on negative distinct integers..find the 
smallest missing non negative element(0,1,2,3,4....)*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int low=0;
    int high=n-1;
    int ans=-1;;
     while(low<=high){
        int mid= low+(high-low)/2;
        if(arr[mid]==mid){
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
     }
}