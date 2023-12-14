//Solution by Umair Hossain
#include<iostream>
using namespace std;
int main()
{
    float num;
    int c=6, flag=0;
    while(c--)
    {
        cin>>num;
        if(num>0)
        {
            flag++;
        }
    }
    cout<<flag<<" valores positivos\n";
}