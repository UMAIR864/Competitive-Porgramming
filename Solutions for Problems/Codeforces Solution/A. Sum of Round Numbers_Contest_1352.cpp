//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> ans;
        int n,x=1;
        cin>>n;
        while(n)
        {
            x*=10;
            int tem=n%x;
            if(tem!=0)
            {
                ans.push_back(tem);
            }
            n-=tem;
        }
 
        cout<<ans.size()<<"\n";
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
}