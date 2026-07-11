#include <iostream>
#include <map>
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
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            cout << arr[i];
            return 0;
        }
    }
    cout << "No majority element";
    // method 2
    // map<int, int> mpp;
    // for (int i = 0; i < n; i++)
    //{
    //    mpp[arr[i]]++;
    //}
    // for (auto it : mpp)
    //{
    //    if (it.second > n / 2)
    //    {
    //        cout << it.first;
    //        return 0;
    //   }
    //}
    // cout << "no majority element";

    // method 3(moore's voting algorithm)
//     int cnt = 0;
//     int el;
//     for (int i = 0; i < n; i++)
//     {
//         if (cnt == 0)
//         {
//             cnt = 1;
//             el = arr[i];
//         }
//         else if (arr[i] == el)
//         {
//             cnt++;
//         }
//         else
//         {
//             cnt--;
//         }
//     }
//     int cnt1 = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == el)
//             cnt1++;
//     }
//     if (cnt1 > n / 2)
//     {
//         cout << el;
//         return 0;
//     }
//     cout << "No majority element";
 }