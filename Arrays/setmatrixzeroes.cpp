#include<iostream>
#include<vector>
using namespace std;
// brute force(method 1)(time complexity- (n*m)(n+m)+(n*m) nearly n cube)
// void markrow(int i ,vector<vector<int>>&arr,int m){
//     for(int j=0;j<m;j++){
//         if(arr[i][j]!=0){
//             arr[i][j]=-1;
//         }
//     }
// }
// void markcol(int j ,vector<vector<int>>&arr,int n){
//     for(int i=0;i<n;i++){
//         if(arr[i][j]!=0){
//             arr[i][j]=-1;
//         }
//     }
// }

// int main(){
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>>arr(n,vector<int>(m));
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cout <<arr[i][j]<<" ";

//         } cout<<"\n";
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==0){
//                 markrow(i,arr,m);
//                 markcol(j,arr,n);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(arr[i][j]==-1){
//                 arr[i][j]=0;
//             }
//         }

// }
// for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             cout << arr[i][j] << " ";
//         }
//         cout << endl;
//     }}

// better (method 2)(time complexity= o(n*m)+o(n*m))(space complexity- o(n+m)
// mearly n square time complexity)
// void setzeroes(vector<vector<int>>&matrix){
//     int n= matrix.size();
//     int m= matrix[0].size();
//     vector<int> row(n,0);
//     vector<int> cols(m,0);
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(matrix[i][j]==0){
//                 row[i]=1;
//                 cols[j]=1;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(row[i]|| cols[j]){
//                 matrix[i][j]=0;
//             }
//         }
//     }}
//     int main(){
//         int n, m;
//     cin >> n >> m;

//     vector<vector<int>> matrix(n, vector<int>(m));

   
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             cin >> matrix[i][j];
//         }
//     }


//     setzeroes(matrix);

//     // Print final matrix
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < m; j++)
//         {
//             cout << matrix[i][j] << " ";
//         }
//         cout << endl;
//     }

    
//     }
 // optimal solution(method 3)
 void setzeroes(vector<vector<int>>&matrix){
    int n=matrix.size();
    int m= matrix[0].size();
    int col0=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
                matrix[i][0]=0;
                if(j!=0){
                    matrix[0][j]=0;
                } else{
                    col0=0;
                }
            }
        }
    }
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
        {
            if(matrix[0][j] == 0 || matrix[i][0] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if(matrix[0][0] == 0)
    {
        for(int j = 0; j < m; j++)
        {
            matrix[0][j] = 0;
        }
    }
    if(col0 == 0)
    {
        for(int i = 0; i < n; i++)
        {
            matrix[i][0] = 0;
        }
    }
 }
 int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> matrix(n, vector<int>(m));

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    setzeroes(matrix);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
