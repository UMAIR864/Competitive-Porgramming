//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    long int arr[4],count=0;
    for(int i=0; i<4; i++)
    {
        cin>>arr[i];
    }
    sort(arr, arr+4);
    for(int i=0; i<4; i++)
    {
        if(arr[i]!=arr[i+1])
        {
            count++;
        }
    }
    cout<<4-count<<"\n";
}
