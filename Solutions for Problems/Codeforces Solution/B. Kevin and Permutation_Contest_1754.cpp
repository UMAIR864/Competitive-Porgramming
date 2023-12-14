//Solution by Umair Hossain
//Bismillahir Rahmanir Rahim.
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast  ios_base::sync_with_stdio(false);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n<4)
        {
            for(int i=1; i<=n; i++)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        else if(n==4)
        {
            cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
        }
        else
        {
            int l=(n/2)+1, r=1;
            while(l<=n)
            {
                cout<<l<<" ";
                l++;
                cout<<r<<" ";
                r++;
                if(l==n && n%2==1)
                {
                    cout<<l<<" ";
                    break;
                }
            }
            cout<<endl;
        }
    }
}