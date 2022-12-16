//Solution by Umair Hossain
#include<iostream>
using namespace std;
int main()
{
    int W,X,Y,Z,d1,h1,m1,s1,d2,h2,m2,s2,st1,st2,data;
    char dia1[5], dia2[5], del[5];
    cin>>dia1>>d1>>h1>>del>>m1>>del>>s1;
    cin>>dia2>>d2>>h2>>del>>m2>>del>>s2;

    st1 = s1 + m1 * 60 + h1 * 60 * 60 + d1 * 24 * 60 * 60;
    st2 = s2 + m2 * 60 + h2 * 60 * 60 + d2 * 24 * 60 * 60;

    data = st2 - st1;

    W = data / (24*60*60);
    X = (data - W*24*60*60) / (60*60);
    Y = (data - W*24*60*60 - X*60*60) / (60);
    Z = (data - W*24*60*60 - X*60*60 - Y*60);

    cout<<W<<" dia(s)\n"<<X<<" hora(s)\n"<<Y<<" minuto(s)\n"<<Z<<" segundo(s)\n";

}