#include <iostream>
using namespace std;
int main()
{
    string s = "Raghav";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s;
}