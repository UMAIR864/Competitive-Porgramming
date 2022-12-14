//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
   string s;
   cin>>s;
   int tem=stoi(s);
   vector<int>v;
   for(int i=0; i<6; i++)
   {
       int val=tem%10;
       v.push_back(val);
       tem/=10;
   }
        if((v[0]+v[1]+v[2])==(v[3]+v[4]+v[5]))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}