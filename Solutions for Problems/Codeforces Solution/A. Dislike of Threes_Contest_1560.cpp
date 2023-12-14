//Solution by Umair Hossain
//Alhamdulliah
#include<bits/stdc++.h>
using namespace std;
#define fastio()    (ios_base:: sync_with_stdio(false));
#define endl          "\n"
#define ll          long long
int main()
{
 
    fastio()
 
    vector<ll>v;
    v.push_back(1);
    v.push_back(2);
    for(int i=3; i<=1e6; i++)
    {
        if(i%3==0 || i%10==3)
        {
            continue;
        }
        else
        {
            v.push_back(i);
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        cout<<v[k-1]<<endl;
    }
}