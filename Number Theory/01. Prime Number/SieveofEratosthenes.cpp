#include<bits/stdc++.h>
using namespace std;
#define N 1000000
bool marked[N];

void sieve(int n)
{
    // Start marking multiples of 2 from 4
    for(int i=4; i<=n; i+=2)
    {
        marked[i]=true;
    }

    // Iterate for odd numbers starting from 3
    for(int i=3; i*i<=n; i+=2)
    {
        if(marked[i]==false)
        {
            // Mark multiples of the current prime number
            for(int j=i*i; j<=n; j+=i+i)
            {
                marked[j]=true;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter Number: ";
    cin>>n;

    // Ensure n is within the array size limit
    n = min(n, N);

    sieve(n);

    cout<<"Prime Numbers from 0 to "<<n<<",\n";

    // Start printing prime numbers from 2
    for(int i=2; i<=n; i++)
    {
        if(marked[i]==false)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}
