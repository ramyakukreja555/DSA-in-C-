#include<iostream>
using namespace std;
int main(){
    // (brute force method)(method-1)(time complexity=o(n^2),space complexity=o(n^2))
    // int n;
    // cin>>n;
    // int arr[n][n];
    // int ans[n][n];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;i++){
    //       cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    //     }
    //     for(int i=0;i<n;i++){
    //         for(int j=0;j<n;j++){
    //             ans[j][n-1-i]=arr[i][j];
    //         }
    //     }
    //     for(int i=0;i<n;i++){
    //     for(int j=0;i<n;i++){
    //       cout<<ans[i][j]<<" ";
    //     }
    //     cout<<"\n";
    //     }

    // method2(optimal solution)(tc-o(n/2+n/2)(transpose)+o(n+n/2)(reverse))
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);

        }
    }
    for(int i=0;i<n;i++){
        // row is arr[i]
        reverse(arr[i],arr[i]+n);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }

    }
