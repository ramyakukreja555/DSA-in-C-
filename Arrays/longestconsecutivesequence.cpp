#include <iostream>
#include<vector>
#include<unordered_set>
using namespace std;

// method 1(brute force)
// bool linearSearch(int arr[], int n, int num)
// {
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == num)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int arr[n];

//     for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // int longest = 1;

    // for (int i = 0; i < n; i++)
    // {
    //     int x = arr[i];
    //     int count = 1;

    //     while (linearSearch(arr, n, x + 1))
    //     {
    //        x= x+1;
    //        count++;
    //     }
    //     longest= max(count,longest);

      
    // }
    // cout<<longest;

    // method 2(better solution)
    // int longestconsecutivesequence( vector<int>&arr){
    //     int n=arr.size();
    //     if(n==0)return 0;
    //     sort(arr.begin(),arr.end());
    //     int lastsmaller=INT_MIN;
    //     int count=0;
    //     int longest=1;
    //     for(int i=0;i<n;i++){
    //         if(arr[i]-1==lastsmaller){
    //             count++;
    //             lastsmaller=arr[i];
    //         }
    //         else if(lastsmaller!=arr[i]){
    //             count=1;
    //             lastsmaller=arr[i];
    //         }
    //         longest =max(longest,count);
    //     }
    //     return longest;}
    //     int main(){
    //         int n;
    //         cin>>n;
    //         vector<int>arr(n);
    //         for(int i=0;i<n;i++){
    //             cin>>arr[i];
    //         }
    //         cout<<longestconsecutivesequence(arr);
    //         return 0;
    //     }
        // method 3(optimal solution)
        int longestconsecutivesequence(vector<int>arr){
            int n=arr.size();
            if(n==0)return 0;
            int longest=1;
            unordered_set<int>st;
            for(int i=0;i<n;i++){
                st.insert(arr[i]);
            }
            for(auto it:st){
                if(st.find(it-1)==st.end()){
                   int count=1;
                   int x=it;
                   while(st.find(x+1)!=st.end()){
                    x=x+1;
                    count++;
                   }
                   longest=max(longest,count);

                }
            }
            return longest;
        }
        int main(){
            int n;
            cin>>n;
            vector<int>arr(n);
            for(int i=0;i<n;i++){
                cin>>arr[i];

            }
            cout<<longestconsecutivesequence(arr);
            return 0;
        }
        

    


  
