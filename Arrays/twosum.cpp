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
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {

            if (arr[i] + arr[j] == target)
            {
                cout << i << " " << j;
                return 0;
            }
        }
    }
    cout << "No pair found";
    // method 2
   // map<int, int> mpp;
    //for (int i = 0; i < n; i++)
    //{
    //    int a = arr[i];
    //    int b = target - arr[i];
     //   if (mpp.find(b) != mpp.end())
    //    {
    //        cout << "YES";
    //          return 0;
    //    }
    //    mpp[a] = i;
    //}
    //cout << "NO";
    // method 3
    //int left = 0, right = n - 1;
    //sort(arr, arr + n);
    //while (left < right)
    //{
     //   int sum = arr[left] + arr[right];
     //   if (sum == target)
     //   {
    //        cout << "YES";
    //    }
    //    else if (sum < target)
    //        left++;
    //    else
    //        right--;
    //}
}