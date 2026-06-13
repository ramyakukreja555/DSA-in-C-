#include <iostream>
// if we simply take cin>>s; then the printing will take place only till space in string
// not after that.
using namespace std;
int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    cout << s;
}