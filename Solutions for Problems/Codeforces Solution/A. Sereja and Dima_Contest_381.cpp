//Solution by Umair Hossain
//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
#define fastio       ios_base::sync_with_stdio(false);
#define endl     "\n"
#define ll   long long
int main()
{
    fastio
 
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int i=0,j=n-1,max,k=0;
        int play1=0,play2=0;
        while(i<=j)
        {
            if(a[i]>=a[j])
            {
                max=a[i];
                i++;
            }
            else
            {
                max=a[j];
                j--;
            }
            if(k%2==0)
                play1=play1+max;
            else
                play2=play2+max;
            k++;
        }
        cout<<play1<<" "<<play2<<endl;
}