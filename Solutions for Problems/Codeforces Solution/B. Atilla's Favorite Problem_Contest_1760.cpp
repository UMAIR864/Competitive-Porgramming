//Solution by Umair Hossain
//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define li long int
#define ll long long
#define fastio  ios_base::sync_with_stdio(false);
#define fl for(int i=0;
#define endl "\n"
 
int main()
{
    fastio
    li t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        char arr[n];
        fl i<n;
        i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        cout<<int(arr[n-1])-48*2<<endl;
    }
}