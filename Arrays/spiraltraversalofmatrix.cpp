#include<iostream>
#include<vector>
// time complexity(o(n*n)) space compexity(o(n*n))
using namespace std;
vector<int> spiralmatrix(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m=matrix[0].size();
    int left=0;int right=m-1;
    int top=0;int bottom=n-1;
    vector<int>ans;
    while(top<=bottom && left<=right){
    for(int i=left;i<=right;i++){
        ans.push_back(matrix[top][i]);
    }
    top++;
    for(int i=top;i<=bottom;i++){
        ans.push_back(matrix[i][right]);
    }
    right--;
    if(top<=bottom){
    for(int i=right;i>=left;i--){
        ans.push_back(matrix[bottom][i]);
    } 
    bottom--;}
    if(left<=right){
    for(int i=bottom;i>=top;i--){
        ans.push_back(matrix[i][left]);
    }
    left++;
}
    }
    return ans;

}
int main(){
    int n;
    cin>>n;
   vector<vector<int>>matrix(n,vector<int>(n));
   for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cin >> matrix[i][j];
    }
}
   vector<int>ans= spiralmatrix(matrix);

}