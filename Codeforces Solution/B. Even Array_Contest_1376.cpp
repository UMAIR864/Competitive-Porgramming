//Solution by Umair Hossain.
#include <bits/stdc++.h>
#define fastio()    (ios_base:: sync_with_stdio(false));
#define endl          "\n"
using namespace std;
int main()
{
    fastio()
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        int even=0,odd=0,fine=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                if(arr[i]%2==0)
                {
                    fine++;
                }
                else
                {
                    even++;
                }
            }
            else
            {
                if(arr[i]%2==1)
                {
                    fine++;
                }
                else
                {
                    odd++;
                }
            }
        }
        if(fine==n)
        {
            cout<<0<<endl;
        }
        else if(even==odd)
        {
            cout<<even<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}