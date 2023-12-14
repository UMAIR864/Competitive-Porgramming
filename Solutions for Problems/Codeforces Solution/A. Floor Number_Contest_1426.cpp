//Solution by Umair Hossain.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x,ans;
        cin>>n>>x;
        if(n<=2)
        {
            cout<<1<<endl;
        }
        else
        {
            if((n-2)%x==0)
            {
                ans=(n-2)/x;
            }
            else
            {
                ans=((n-2)/x)+1;
            }
            cout<<ans+1<<endl;
        }
    }
}