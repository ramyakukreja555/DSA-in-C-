#include<iostream>
#include<map>
#include<vector>
using namespace std;
// int main(){
    // brute force solution(method 1)(time complexity = o(n cube))
//     int n;
//     cin>>n;int arr[n];
//     int k;
//     cin>>k;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int l=i;l<=j;l++){
//                 sum=sum+arr[l];
                
                
//             }if(sum==k){
//                     count++;
//         }
//     }
// }
// cout<<count;

// better solution (method 2)(time complexity=o(n^2))
// int n;
//     cin>>n;int arr[n];
//      int k;
//      cin>>k;
//      for(int i=0;i<n;i++){
//          cin>>arr[i];
//      }
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//      }
//     int count=0;
//     for(int i=0;i<n;i++){
//     int sum=0;
//         for(int j=i;j<n;j++){
//             
//             
//                 sum=sum+arr[j];
                
                
//             if(sum==k){
//                     count++;
//         }
//     }
// }
// cout<<count;
// }

// optimal solution(method 3)(time complexity=o(n*logn),space complexity=o(n))
int findallsubarraywithgivensum(vector<int>&arr,int k){
    map<int,int>mpp;
    mpp[0]=1;
    int presum=0,count=0;
    for(int i=0;i<arr.size();i++){
        presum=presum+arr[i];
        int remove= presum-k;
        count =count+mpp[remove];
        mpp[presum]++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findallsubarraywithgivensum(arr,k);
}


