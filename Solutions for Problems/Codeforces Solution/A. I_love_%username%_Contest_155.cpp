//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    int n;cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int mx=arr[0];
    int mn=arr[0];
    int count=0;
 
    for(int i=0; i<n; i++)
    {
        if(arr[i]>mx)
        {
            mx=arr[i];
            count++;
        }
        if(arr[i]<mn)
        {
            mn=arr[i];
            count++;
        }
    }
    cout<<count<<endl;
}