//Solution by Umair Hossain
#include <iostream>
using namespace std;
int main()
{
    double n;
    cin>>n;
        int a, b, c, d, e, f, g, h, i, j, k, l;
    a = n * 100;
    b = a / 10000;
    a = a % 10000;
    c = a / 5000;
    a = a % 5000;
    d = a / 2000;
    a = a % 2000;
    e = a / 1000;
    a = a % 1000;
    f = a / 500;
    a = a % 500;
    g = a / 200;
    a = a % 200;
    h = a / 100;
    a = a % 100;
    i = a / 50;
    a = a % 50;
    j = a / 25;
    a = a % 25;
    k = a / 10;
    a = a % 10;
    l = a / 5;
    a = a % 5;
    cout<<"NOTAS:\n";
    cout<<b<<" nota(s) de R$ 100.00\n";
    cout<<c<<" nota(s) de R$ 50.00\n";
    cout<<d<<" nota(s) de R$ 20.00\n";
    cout<<e<<" nota(s) de R$ 10.00\n";
    cout<<f<<" nota(s) de R$ 5.00\n";
    cout<<g<<" nota(s) de R$ 2.00\n";
    cout<<"MOEDAS:\n";
    cout<<h<<" moeda(s) de R$ 1.00\n";
    cout<<i<<" moeda(s) de R$ 0.50\n";
    cout<<j<<" moeda(s) de R$ 0.25\n";
    cout<<k<<" moeda(s) de R$ 0.10\n";
    cout<<l<<" moeda(s) de R$ 0.05\n";
    cout<<a<<" moeda(s) de R$ 0.01\n";
}