#include <iostream>
#include <map>
using namespace std;
int main()
{
    // method 1
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int num, count;
    for (int i = 0; i < n; i++)
    {
        num = arr[i];
        count = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == num)
                count++;
        }
        if (count == 1)
        {
            cout << num;
            break;
        }
    }
    // method 2
    //int maximum = arr[0];
    //for (int i = 0; i < n; i++)
    //{
     //   maximum = max(arr[i], maximum);
   // }
    //int hasharr[maximum + 1] = {0};
    //for (int i = 0; i < n; i++)
    //{
        //hasharr[arr[i]]++;
    //}
    //for (int i = 0; i < maximum + 1; i++)
    //{
        //if (hasharr[i] == 1)
       // {
            //cout << i;
       // }
    //}
    // method 3
   // map<long long, int> mpp;
    //for (int i = 0; i, n; i++)
   // {
       // mpp[arr[i]]++;
   // }
    //for (auto it : mpp)
    //{
    //    if (it.second == 1)
    //    {
    //        cout << it.first;
     //   }
    //}
    // method 4
    //int XOR = 0;
    //for (int i = 0; i < n; i++)
    //{
    //    XOR = XOR ^ arr[i];
   // }
    //cout << XOR;
}