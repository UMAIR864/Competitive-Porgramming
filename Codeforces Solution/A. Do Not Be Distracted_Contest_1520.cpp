//Solution by Umair Hossain.
//Bismillahir Rahmanir Rahim.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool flag=true;
        unordered_map<char,int>m;
        for(int i=0; i<n; i++)
        {
            m[s[i]]++;
            if(m[s[i]]>1 && s[i]!=s[i-1])
            {
                flag=false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}