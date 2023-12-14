#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        long long n;
        cin >> n;

        int c1, c2;
            c2 = n/3;
            c1 = c2+1;
            if(c2*2+c1*1>n)
            {
                c1--;
            }
            if(c2*2+c1*1<n)
            {
                swap(c1,c2);
            }
        cout << c1 << " " << c2 << endl;
    }

    return 0;
}
