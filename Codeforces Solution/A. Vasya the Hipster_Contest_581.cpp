//Solution by Umair Hossain.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,b,mx,mn;
    cin>>r>>b;
    mx=max(r,b);
    mn=min(r,b);
    cout<<mn<<" "<<(mx-mn)/2<<endl;
}
