#include <iostream>
using namespace std;
int main()
{
    // using stl(method 1)
    // int n;
    // cin >> n;

    // vector<int> arr(n);

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // next_permutation(arr.begin(), arr.end());

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // method2
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int index = -1;
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] < arr[i + 1])
        {
            index = i;
            break;
        }
    }
    if (index == -1)
{
    reverse(arr, arr + n);
    return 0;
}
    for (int i = n - 1; i > index; i--)
    {
        if (arr[i] > arr[index])
        {
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr+index + 1,arr+ n);
}