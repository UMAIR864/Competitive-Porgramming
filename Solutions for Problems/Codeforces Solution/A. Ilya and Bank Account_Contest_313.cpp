//Solution by Umair Hossain
//Bismillahhir Rahmanir Rahim.
#include <bits/stdc++.h>
#define fastio()    (ios_base:: sync_with_stdio(false),cin.tie(NULL));
#define endl          "\n"
#define ll long long
using namespace std;
int main()
{
    fastio()
 
    ll n;cin>>n;
    if (n>=0){
        cout<<n<<endl;
    }
    else{
        ll a=n/10;
        ll b=n/100*10+n%10;
        cout<<max(a,b)<<endl;}
}