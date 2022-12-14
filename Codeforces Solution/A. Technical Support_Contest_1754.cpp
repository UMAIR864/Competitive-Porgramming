//Solution by Umair Hossain
//Bismillahir Rahmanir Rahim.
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast  ios_base::sync_with_stdio(false);
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<char>v;
string s;cin>>s;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='Q')
            {
                v.push_back(s[i]);
            }
            else
            {
                if(!v.empty())
                v.pop_back();
            }
        }
 
        if(v.empty())
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
}