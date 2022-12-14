//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    int arr[n];
    int mx,mn,pmx,pmn;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    mx=*max_element(arr, arr+n);
    mn=*min_element(arr, arr+n);
    for(int i=0; i<n; i++)
    {
        if(arr[i]==mn)
        {
            pmn=i;
        }
    }
        for(int i=0; i<n; i++)
    {
        if(arr[i]==mx)
        {
            pmx=i;
            break;
        }
    }
    if(arr[0]==mx && arr[n-1]==mn)
    {
        cout<<0<<endl;
    }
    else
    {
        if(pmx>pmn)
        {
            pmx--;
        }
        pmx++;
        pmn++;
        cout<<((n-pmn)+pmx)-1<<endl;
    }
}