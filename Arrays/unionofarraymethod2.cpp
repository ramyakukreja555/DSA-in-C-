#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> arr1(n1), arr2(n2);

    
    for(int i = 0; i < n1; i++) {
        cin >> arr1[i];
    }

   
    for(int i = 0; i < n2; i++) {
        cin >> arr2[i];
    }

    vector<int> ans;

    int i = 0;
    int j = 0;

    while(i < n1 && j < n2) {

        if(arr1[i] <= arr2[j]) {

            // Insert only if it is not already the last element
            if(ans.empty() || ans.back() != arr1[i]) {
                ans.push_back(arr1[i]);
            }

            i++;
        }
        else {

            if(ans.empty() || ans.back() != arr2[j]) {
                ans.push_back(arr2[j]);
            }

            j++;
        }
    }

    // Remaining elements of first array
    while(i < n1) {

        if(ans.empty() || ans.back() != arr1[i]) {
            ans.push_back(arr1[i]);
        }

        i++;
    }

    // Remaining elements of second array
    while(j < n2) {

        if(ans.empty() || ans.back() != arr2[j]) {
            ans.push_back(arr2[j]);
        }

        j++;
    }

    // Print union
    for(int x : ans) {
        cout << x << " ";
    }

    return 0;
}