// map is always sorted // while iterating through map it.first is key and it.second is frequency
#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];

    }
    // pre compute
    map<int,int>mpp;
    for(int i=0;i<n; i++){
        mpp[arr[i]]++;
    }
    // iterating into the map
    for(auto it:mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }
    int q; cin>>q;
    while(q--){
        int number;
        cin>>number;
        // fetch
        cout<<mpp[number]<<endl;
    }


}