//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    int n;cin>>n;
    int p=0,c=0;
    while(n--)
    {
        int tem;
        cin>>tem;
        if(tem>0)
        {
            p+=tem;
        }
        else
        {
            if(p<1)
            {
                c++;
            }
            else
            {
              p--;
            }
        }
    }
    cout<<c<<endl;
}