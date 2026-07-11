#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            maxi = max(sum, maxi);
        }
    }
    cout << maxi;
    // method 2
    //     int maxi = INT_MIN;
    //     for (int i = 0; i < n; i++)
    //     {
    //         int sum=0;
    //         for (int j = i; j < n; j++)
    //         {

    //                 sum = sum + arr[j];
   // maxi = max(sum, maxi);

    //             }
    //             
    //         }
    //     }
    //     cout << maxi;

    // method 3(Kadane's algorithm)
    // int sum = 0;
    // int maxi = INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     sum = sum + arr[i];
    //     if (sum > maxi)
    //     {
    //         maxi = sum;
    //     }
    //     if (sum < 0)
    //     {
    //         sum = 0;
    //     }
    // }
    // cout << maxi;
}
