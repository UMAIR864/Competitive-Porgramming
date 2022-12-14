//Solution by Umair Hossain
//Bismillahir Rahmanir Rahim.
#include<bits/stdc++.h>
using namespace std;
#define fastio  ios_base::sync_with_stdio(false);
#define endl "\n"
int main()
{
fastio
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        int digit=x%10;
        int cnt=0;
        while(x>0)
        {
            x/=10;
            cnt++;
        }
        if(cnt==1)
        {
            cout<<((digit*10)-10)+1<<endl;
        }
        else if(cnt==2)
        {
            cout<<((digit*10)-10)+3<<endl;
        }
        else if(cnt==3)
        {
            cout<<((digit*10)-10)+6<<endl;
        }
        else if(cnt==4)
        {
            cout<<((digit*10)-10)+10<<endl;
        }
    }
}