#include <iostream>
using namespace std;
int main()

{

    string s = "Raghav";
    cout << s << endl;
    s.push_back('a'); // this character will be added at the end
    cout << s << endl;
    s.pop_back(); // last character of the string will be removed
    cout << s << endl;
    s.append(" garg"); // new string can be added at the end
    cout << s << endl;
    s.clear(); // will empty the string
    cout << s << endl;
}