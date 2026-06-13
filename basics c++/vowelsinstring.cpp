#include <iostream>
// to calculate the length of the string we use s.length() or s.size()
using namespace std;
int main()
{
    string s = "cow is an animal with four legs";
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            count++;
    }
    cout << count;
}
