//Solution by Umair Hossain
#include<bits/stdc++.h>
#define endl "\n"
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,k,l,c,d,p,nl,np,td,tc,ts;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    td=k*l;
    td/=nl;
    tc=c*d;
    ts=p/np;
    int res=min(min(td,tc),ts)/n;
    cout<<res<<endl;
}