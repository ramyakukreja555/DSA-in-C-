#include <iostream>
using namespace std;
int main()
{
    // Method 1
    int n;
    cin >> n;

    int arr[n - 1];

    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i <= n; i++)
    {

        bool found = false;

        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] == i)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cout << i;
            break;
        }
    }
    // Method 2
    // int  hash[n+1]={0};
    // for(int i=0;i<n-1;i++){
    //     hash[arr[i]]=1;
    // }
    // for(int i=1;i<n;i++){
    //     if(hash[i]==0){
    //         cout<<i;
    //         break;
    //     }
    // }

    // Method 3
    // int sum = 0;
    // int sum1 = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum = sum + i;
    // }
    // for (int i = 0; i < n - 1; i++)
    // {
    //     sum1 = sum1 + arr[i];
    // }
    // int missingnumber;
    // missingnumber = sum - sum1;
    // cout << missingnumber;

    // Method 4
    // int xor1 = 0;
    // int xor2 = 0;
    // for (int i = 0; i < n - 1; i++)
    // {
    //     xor1 = xor1 ^ arr[i];
    //     xor2 = xor2 ^ (i + 1);
    // }
    // xor2 = xor2 ^ n;
    // missingnumber = xor1 ^ xor2;
    // cout << missingnumber;
}