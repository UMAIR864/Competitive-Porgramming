//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        for(int i=0; i<s.length()-1; i+=2)
        {
            cout<<s[i];
        }
        cout<<s[s.length()-1]<<endl;
    }
}