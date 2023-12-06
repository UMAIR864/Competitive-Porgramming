#include<bits/stdc++.h>
using namespace std;
int isPrime(int n)
{
    if(n<=1) return 0;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(isPrime(n)==1)
    {
        cout<<n<<" is Prime.\n";
    }
    else
    {
        cout<<n<<" is Not Prime.\n";
    }
    return 0;
}
