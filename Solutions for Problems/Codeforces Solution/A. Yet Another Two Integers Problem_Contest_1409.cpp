//Solution by Umair Hossain
//Alhamdulliah
#include<bits/stdc++.h>
using namespace std;
#define fastio()    (ios_base:: sync_with_stdio(false));
#define ll          long long
#define endl        "\n"
int main()
{
    fastio()
 
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll val=abs(a-b);
        int arr[10]={10,9,8,7,6,5,4,3,2,1};
        int count=0;
        for(int i=0; i<10; i++)
        {
            count+=val/arr[i];
            val=val%arr[i];
        }
        cout<<count<<endl;
    }
}