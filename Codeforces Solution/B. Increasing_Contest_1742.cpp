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
    int n, flag=0;cin>>n;
    ll arr[n];
    for(int i=0; i<n; i++)
    {
    cin>>arr[i];
    }
    sort(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==arr[i+1])
        {
            flag++;
        }
    }
    if(flag==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
}
}