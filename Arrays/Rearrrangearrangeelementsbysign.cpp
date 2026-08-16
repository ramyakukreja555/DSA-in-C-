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
    int pos[n];
    int neg[n];
    int p = 0, q = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            pos[p++] = arr[i];
        }
        else
        {
            neg[q++] = arr[i];
        }
    }
    for (int i = 0; i < p; i++)
    {
        arr[2 * i] = pos[i];
        arr[2 * i + 1] = neg[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // method 2(pos=neg)
//     int ans[n];
//     int posindex = 0, negindex = 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > 0)
//         {
//             ans[posindex] = arr[i];
//             posindex += 2;
//         }
//         else
//         {
//             ans[negindex] = arr[i];
//             negindex += 2;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         cout << ans[i] << " ";
//     }

   

 }