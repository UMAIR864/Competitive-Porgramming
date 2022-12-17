//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,t=0;
    cin>>n>>k;
    while(n--)
    {
        int tem;
        cin>>tem;
        if(tem+k<=5)
        {
            t++;
        }
    }
    cout<<(t/3)<<"\n";
}