#include<iostream>
#include<vector>
#include<map>
using namespace std;

    // brute force method(tc=o(n^2), sc=o(1))
    // int n;
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // vector<int>ans;
    // for(int i=0;i<n;i++){
    //     int count =0;
    //     for(int j=0;j<n;j++){
    //         if(arr[i]==arr[j]){
    //             count++;
    //         }
    //     }
    //     if(count>n/3){
    //         bool alreadypresent=false;
    //         for(int x:ans){
    //             if(x==arr[i]){
    //                 alreadypresent=true;
    //                 break;
    //             }
    //         }
    //         if(!alreadypresent){
    //             ans.push_back(arr[i]);
    //         }
    //     }
    // }
    // for(int x:ans){
    //     cout<<x<<" ";
    // }

    // better method(method 2)(tc=o(nlogn),sc=o(n))
    // int n;
    // cin >> n;

    // vector<int> arr(n);

    // for (int i = 0; i < n; i++) {
    //     cin >> arr[i];
    // }
    // map<int,int>mpp;
    // for(int i=0;i<n;i++){
    //     mpp[arr[i]]++;
    // }
    // vector<int>ans;
    // for(auto it:mpp){
    //     if(it.second>n/3){
    //         ans.push_back(it.first);
    //     }
    // }
    // for(int x:ans){
    //     cout<<x<<" ";
    // }

    // optimal method (method 3)(EXTENDED BOYER-MOORE VOTING ALGORITHM)
    vector<int>majorityelement(vector<int>&arr){
        int cnt1=0,cnt2=0;
        int el1=0,el2=0;
        for(int i=0;i<arr.size();i++){
            if(cnt1==0&&arr[i]!=el2){
                el1=arr[i];
                cnt1=1;
            }
            else if(cnt2==0&&arr[i]!=el1){
                el2=arr[i];
                cnt2=1;
            }
            else if(arr[i]==el1){
                cnt1++;
            }
            else if(arr[i]==el2){
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }

        }
        cnt1=0;
        cnt2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==el1){
                cnt1++;
            }
            if(arr[i]==el2){
                cnt2++;
            }
        }
        vector<int>ans;
        if(cnt1>arr.size()/3){
            ans.push_back(el1);

        } 
        if(cnt2>arr.size()/3){
            ans.push_back(el2);
        }
        return ans;

    }
    int main(){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0; i < n; i++){
           cin >> arr[i];
}
        vector<int>ans=majorityelement(arr);
        for (int x : ans) {
        cout << x << " ";
    }
    }



    
