//Solution by Umair Hossain
//Bismillahhir Rahmanir Rahim.
#include <bits/stdc++.h>
#define fastio()    (ios_base:: sync_with_stdio(false));
#define endl          "\n"
#define ll long long
using namespace std;
int main()
{
    fastio()
    int t;cin>>t;
    while(t--)
    {
        ll v[3];
        cin>>v[0]>>v[1]>>v[2];
        sort(v, v+3);
        if((v[0]+v[1])==v[2])
        {
            cout<<"YES\n";
        }
        else
            cout<<"NO\n";
 
    }
}