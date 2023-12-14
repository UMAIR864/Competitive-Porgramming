//Solution by Umair Hossain
//Bismillahir Rahmanir Rahim.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    string s;
    cin>>s;
    for(int i=0; i<=s.length(); i++)
    {
        if(s[i]=='.')
        {
            cout<<0;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<2;
            i++;
        }
    }
}