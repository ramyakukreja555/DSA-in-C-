#include <iostream>
#include <map>
using namespace std;
int main()
{
    int len = 0;
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
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum = sum + arr[k];
            }
            if (sum == target)
                len = max(len, j - i + 1);
        }
    }
    cout << len;

    // method 2
//    int k;
//    cin >> k;
//    map<int, int> presummap;
//    int sum = 0;
//    int maxlen = 0;
//    for (int i = 0; i < n; i++)
 //   {
//        sum = sum + arr[i];
 //       if (sum == k)
 //       {
//            maxlen = max(maxlen, i + 1);
 //       }
 //       int rem = sum - k;
//        if (presummap.find(rem) != presummap.end())
//        {
 //           int len = i - presummap[rem];
 //           maxlen = max(maxlen, len);
 //       }
 //       if (presummap.find(sum) == presummap.end())
//        {
//            presummap[sum] = i;
//        }
//    }
//    cout << maxlen;
}