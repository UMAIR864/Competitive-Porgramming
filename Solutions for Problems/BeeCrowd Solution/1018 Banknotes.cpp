//Solution by Umair Hossain
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    int arr[7]= {100, 50, 20, 10, 5, 2, 1};
    int brr[7];
    cin>>n;
    cout<<n<<endl;
    for(i=0 ; i<7; i++)
    {
        brr[i] = n/arr[i];
        n = n%arr[i];
    }
    for(j=0; j<7; j++)
    {
     cout<<brr[j]<<" nota(s) de R$ "<<arr[j]<<",00"<<endl;
    }
}