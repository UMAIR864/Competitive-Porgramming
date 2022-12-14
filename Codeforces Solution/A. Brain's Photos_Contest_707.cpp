//Solution by Umair Hossain.
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
    ios_base::sync_with_stdio(false);
    int n,m;
    cin>>n>>m;
    int flag=0;
    char arr[n+1][m+1];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j]!='W' && arr[i][j]!='G' && arr[i][j]!='B')
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        cout<<"#Color\n";
    }
    else
    {
        cout<<"#Black&White\n";
    }
}