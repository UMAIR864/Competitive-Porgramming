//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n==1 && m==1)
        {
            cout<<1<<endl;
        }
        else
        {
            if((n*m)%2==0)
            {
                cout<<(n*m)/2<<endl;
            }
            else
            {
                cout<<((n*m)/2+1)<<endl;
            }
        }
    }
}
