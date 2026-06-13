#include <iostream>
using namespace std;
int main()
{
    string s = "raghav";
    cout << s << endl;
    int n = s.length();
    reverse(s.begin(), s.begin() + 3);
    cout << s;
}