//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,r,flag=0;
    cin>>c>>r;
    for(int i=1; i<=c; i++)
    {
        for(int j=0; j<r; j++)
        {
            if(i%4==2)
            {
                if(j==r-1)
                {
                    cout<<"#";
                }
                else
                {
                    cout<<".";
                }
            }
            else if(i%4==0)
            {
                if(j==0)
                {
                    cout<<"#";
                }
                else
                {
                cout<<".";
                }
            }
            else
            {
                cout<<"#";
            }
        }cout<<endl;
    }
}