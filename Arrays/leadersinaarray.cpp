#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // method1
    //     int n;
    //     cin >> n;
    //     int arr[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     vector<int> ans;

    //     for (int i = 0; i < n; i++)
    //     {
    //         bool leader = true;
    //         for (int j = i + 1; j < n; j++)
    //         {
    //             if (arr[j] > arr[i])
    //             {
    //                 leader = false;
    //                 break;
    //             }
    //         }
    //         if (leader == true)
    //         {
    //             ans.push_back(arr[i]);
    //         }
    //     }
    //     for (int i = 0; i < ans.size(); i++)
    //     {
    //         cout << ans[i] << " ";
    //     }

    // method 2
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> ans;
    int maxi = INT_MIN;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi = max(arr[i], maxi);
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i];
    }
}