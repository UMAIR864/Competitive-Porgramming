//Bismillahir Rahmanir Rahim.
//Solution by Umair Hossain.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n1,n2,m1,m2;
        cin>>n1>>n2;
        cin>>m1>>m2;
        if(n1<n2 && m1<m2 && n1<m1 && n2<m2)
        {
            cout<<"YES\n";
        }
        else if(n1<n2 && m1<m2 && n1>m1 && n2>m2)
        {
            cout<<"YES\n";
        }
        else
        {
            swap(n1,n2);
            swap(m1,m2);
                    if(n1<n2 && m1<m2 && n1<m1 && n2<m2)
        {
            cout<<"YES\n";
        }
        else if(n1<n2 && m1<m2 && n1>m1 && n2>m2)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        }
    }
}
