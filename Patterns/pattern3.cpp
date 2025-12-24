#include <iostream>

using namespace std;
int main()
{
    int n = 5;

    //  pattern type 1
    cout << "Pattern 1 \n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    cout << "\n";

    // pattern type 2
    cout << "Pattern 2 \n";
    for (int i = 5; i > 0; i--)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << i;
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 3
    cout << "Pattern 3 \n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 4
    cout << "Pattern 4 \n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << 6 - i;
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 5
    cout << "Pattern 5 \n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= i; j--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 6
    cout << "Pattern 6 \n";
    for (int i = 5; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 7
    cout << "Pattern 7 \n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = n - 1; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 8
    cout << "Pattern 8 \n";
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * (n - i) + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 9
    cout << "Pattern 9 \n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * (5 - i) + 1; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 10
    cout << "Pattern 10 \n";
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for (int i = 1; i <= 4; i++)
    {
        for (int j = i; j <= 4; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 11
    cout << "Pattern 11 \n";
    for (int i = 1; i <= 5; i++)
    {
        int flag = (i % 2 == 0) ? 0 : 1;
        for (int j = 1; j <= i; j++)
        {
            cout << flag;
            flag = (flag == 0) ? 1 : 0;
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 12
    cout << "Ramya Kukreja\n";
    cout << "Pattern 12 \n";
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int k = 1; k <= 2 * (4 - i); k++)
        {
            cout << " ";
        }
        for (int m = 1; m <= i; m++)
        {
            cout << i - m + 1;
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 13
    cout << "Ramya Kukreja\n";
    cout << "Pattern 13 \n";
    int flag = 1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << flag << " ";
            flag = flag + 1;
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 14
    cout << "Pattern 14 \n";

    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 15
    cout << "Pattern 15 \n";
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 5; j >= i; j--)
        {
            cout << ch;
            ch = ch + 1;
        }
        cout << "\n";
    }
    cout << "\n";

    //  pattern type 16
    cout << "Pattern 16 \n";
    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
        }
        cout << "\n";
        ch = ch + 1;
    }
    cout << "\n";

    //  pattern type 17
    cout << "Pattern 17 \n";
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
        for (int j = 5; j >= i; j--)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch = ch + 1;
        }
        for (int j = 1; j < i; j++)
        {
            ch = 'A';
            ch = ch + i - j - 1;
            cout << ch;
        }

        cout << "\n";
    }
    cout << "\n";

    //  pattern type 18
    cout << "Pattern 18 \n";
    ch = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            ch = 65 +n-i+j-1;
            cout << ch;
        }
        cout << "\n";
    }
}