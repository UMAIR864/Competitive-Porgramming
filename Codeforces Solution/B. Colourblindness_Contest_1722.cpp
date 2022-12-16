//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        string s1, s2;
        cin>>s1;
        cin.ignore();
        cin>>s2;
        for(int i=0; i<n; i++)
        {
            if(s1[i] != s2[i])
            {
                if(s1[i]=='R' || s2[i]=='R')
                {
                    count++;
                }
            }
        }
        if(count==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}