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
    int mini = arr[0];
    int maxprofit = 0;
    for (int i = 1; i < n; i++)
    {
        int cost = arr[i] - mini;
        maxprofit = max(maxprofit, cost);
        mini = min(mini, arr[i]);
    }
    cout << maxprofit;
}
