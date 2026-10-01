#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> arr = {4, 5, 2, 10, 8};
    int n = arr.size();

    vector<int> ans(n);
    stack<int> st;

    for (int i = 0; i < n; i++) {

        // Remove elements which are not smaller
        while (!st.empty() && st.top() >= arr[i]) {
            st.pop();
        }

        // If no smaller element exists
        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();

        // Push current element
        st.push(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }

    return 0;
}