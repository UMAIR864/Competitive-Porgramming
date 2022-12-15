//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        int n,flag=0;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for(int i=0; i<n-1; i++)
        {
            if(arr[i+1]-arr[i]>1)
            {
                cout<<"NO"<<endl;
                flag++;
                break;
            }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
    }
}