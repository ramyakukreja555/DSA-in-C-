#include<iostream>
using namespace std;
int main(){
    int x;
    cin>>x;
    int low=0;
    int high=x;
    
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid*mid==x) {
            flag=true;
            cout<<mid;}
        if(mid*mid>x) high=mid-1;
        if(mid*mid<x) low=mid+1;
    }
    if(!flag) cout<<high;
    
}