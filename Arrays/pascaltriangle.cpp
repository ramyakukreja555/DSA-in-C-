#include<iostream>
using namespace std;
int findncr(int n,int r){
    int res=1;
    for(int i=0;i<r;i++){
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
}
int main(){
    //ques 1- given ROW and COLUMN then find number at that place
    // simply find R-1 C C-1(NCR)(brute force=find factorials according to formula)
    //optimal solution(tc=o(r),sc=o(1))
    int n,r;
    cin>>n>>r;
    cout<<"the number at that place is:"<<findncr(n-1,r-1);

    //ques 2(print any given row of pascal triangle)
    // nth row will always have n elements
    // brute force
    for(int i=1;i<=n;i++){//tc=o(n*r)(we multiply n with r because of that function)
        cout<<findncr(n-1,i-1)<<" ";
    }
    //optimal solution(tc=o(n),sc=o(1))
    long long ans=1;
    cout<<ans;
    for(int i=1;i<n;i++){
        ans=ans*(n-i);
        ans=ans/i;
        cout<<ans<<" ";

    }

    // ques3(given N find pascal triangle)
    // vector<int> generaterow(int row) {
    //     long long ans=1;
    //     vector<int> ansrow;
    //     ansrow.push_back(1);
    //     for(int col=1;col<row;col++){
    //         ans=ans*(row-col);
    //         ans=ans/col;
    //         ansrow.push_back(ans);

    //     }
    //     return ansrow;
    // }
    // vector<vector<int>>pascaltriangle(int n){
    //     vector<vector<int>>ans;
    //     for(int i=1;i<=n;i++){
    //         ans.push_back(generaterow(i));
    //     }
    //     return ans;
    // }

    
}