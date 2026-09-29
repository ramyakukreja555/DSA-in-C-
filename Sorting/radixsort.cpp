#include<iostream>
using namespace std;
void countingsort(int arr[],int n,int place){
    int count[10]={0};
    int brr[n];
    // count the digits
    for(int i=0;i<n;i++){
        int digit=(arr[i]/place)%10;
        count[digit]++;
    }
    // cumulative count;
    for(int i=1;i<10;i++){
        count[i]=count[i]+count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        int digit=(arr[i]/place)%10;
        brr[--count[digit]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=brr[i];
    }
}
void radixsort(int arr[], int n){
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxi) maxi=arr[i];

    }
    for(int place=1;maxi/place>0;place=place*10){
        countingsort(arr,n,place);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    radixsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}