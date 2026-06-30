#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr1[n];
    int arr2[m];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < m; i++)
    {
        st.insert(arr2[i]);
    }
    int index = 0;
    int unique[n + m];
    for (auto it : st)
    {
        unique[index] = it;
        index++;
    }
    for (int i = 0; i < index; i++)
    {
        cout << unique[i];
    }
}