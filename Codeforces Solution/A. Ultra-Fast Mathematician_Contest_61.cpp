//Bismillahir Rahmanir Rahim.
//Solution by Umair Hossain.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1;
    cin>>s2;
    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]=='0' && s2[i]=='0')
        {
            cout<<0;
        }
        else if(s1[i]=='1' && s2[i]=='1')
        {
            cout<<0;
        }
        else
        {
            cout<<1;
        }
    }
    cout<<"\n";
}
