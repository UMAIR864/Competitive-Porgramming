#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        int m, n;
        m = s[0] - 'a';
        n = s[1] - '1';

        // horizontally
        for (int i = 0; i < 8; i++)
        {
            if (i != m)
            {
                cout << char(i + 'a') << s[1] << endl;
            }
        }

        // vertically
        for (int j = 0; j < 8; j++)
        {
            if (j != n)
            {
                cout << s[0] << char(j + '1') << endl;
            }
        }
    }

    return 0;
}
