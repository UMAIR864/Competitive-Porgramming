//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
#define fastio       ios_base::sync_with_stdio(false);
#define endl     "\n"
int main()
{
    fastio
    int n,cpr=0,cm=0,cph=0,st=0;
    cin>>n;
    int pr[n],m[n],ph[n];
    int i1=0,i2=0,i3=0;
    for(int i=0; i<n; i++)
    {
        int t;
        cin>>t;
        if(t>3)
        {
            st=1;
            break;
        }
        if(t==1)
        {
            pr[i1]=i+1;
            i1++;
            cpr++;
        }
        else if(t==2)
        {
            m[i2]=i+1;
            i2++;
            cm++;
        }
        else
        {
            ph[i3]=i+1;
            i3++;
            cph++;
        }
    }
    if(cpr==0 || cm==0 || cph==0)
    {
        st=1;
    }
    int flag=0,flag1=0;
    flag=min(min(cpr,cm),cph);
    flag1=max(max(cpr,cm),cph);
    if(st==0 && n==3 && pr[0]!=m[0] && m[0]!=ph[0])
    {
        cout<<"1"<<endl;
        cout<<pr[0]<<" "<<m[0]<<" "<<ph[0]<<endl;
    }
    else if(st==0 && n==5 && pr[0]!=m[0] && m[0]!=ph[0])
    {
        cout<<"1"<<endl;
        cout<<pr[0]<<" "<<m[0]<<" "<<ph[0]<<endl;
    }
    else if(st==0 && flag1>=3 && flag>0)
    {
        cout<<flag<<endl;
        int count=0;
        for(int i=0; i<flag; i++)
        {
            if(count==3)
            {
                cout<<endl;
                count=0;
            }
            count++;
            cout<<pr[i]<<" ";
            count++;
            cout<<m[i]<<" ";
            count++;
            cout<<ph[i];
        }
        cout<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
