#include<bits/stdc++.h>
using namespace std;
int GCD(int a, int b)
{
    if(b==0) return a;
    return GCD(b,a%b);
}
int main()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    int gcd=GCD(a,b);//Calculate GCD
    int lcm=(a/gcd)*b;
    cout<<"LCM of "<<a<<","<<b<<": "<<lcm<<endl;
}
