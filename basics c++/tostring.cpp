#include <iostream>
using namespace std;
int main()
{
    int x = 1234567; // change integer to string
    string s = to_string(x);
    cout << s;
    // now string to integer
    string s = "12435698";
    int x = stoi(s);
    cout << x;
}