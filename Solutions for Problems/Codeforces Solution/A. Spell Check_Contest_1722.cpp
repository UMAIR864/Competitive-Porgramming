//Solution by Umair Hossain
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n=0;
        cin>>n;
        string s;
        cin>>s;
        sort(s.begin(), s.end());
        string tem="Timur";
        sort(tem.begin(), tem.end());
        if(s==tem)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}