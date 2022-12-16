//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long int k,r,tem=0;
    cin>>k>>r;
    for(int i=1; ;i++)
    {
        tem+=k;
        if((tem%10==0 ) || (tem%10==r))
        {
            cout<<i<<endl;
            break;
        }
    }
}