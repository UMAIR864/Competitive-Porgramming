#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int ans=gcd(a,b);//__gcd(a,b) built-in function
    cout<<"GCD "<<a<<", "<<b<<": "<<ans<<endl;
}
