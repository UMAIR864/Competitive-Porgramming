//Solution by Umair Hossain
#include <iostream>
using namespace std;
int m,c;
int main()
{
    int n;cin>>n;
    while(n--)
    //int m=0,c=0;
    {
      int a,b;
      cin>>a>>b;
      if(a==b)
      {
        m++;
        c++; 
      }
      else if(a>b)
      {
        m++;
      }
      else
      {
        c++;
      }
    }
    if(m==c)
    {
      cout<<"Friendship is magic!^^\n";
    }
    else if(m>c)
    cout<<"Mishka\n";
    else
    cout<<"Chris\n";
}