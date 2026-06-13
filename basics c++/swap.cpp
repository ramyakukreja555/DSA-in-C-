#include <iostream>
using namespace std;
int main()
{
    int x = 2;
    int y = 3;
    cout << x << " " << y << endl;
    int temp;
    temp = x;
    x = y;
    y = temp;
    cout << x << " " << y << endl;
}