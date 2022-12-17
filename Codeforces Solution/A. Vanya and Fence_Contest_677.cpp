//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,h,w=0;
    cin>>n>>h;
    while(n--)
    {
        int tem;
        cin>>tem;
        if(tem<=h)
        {
            w+=1;
        }
        else if(tem>=h)
        {
            w+=2;
        }
    }
    cout<<w<<"\n";
}