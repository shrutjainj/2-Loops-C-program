#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    a=0;
    b=1;
    cout<<a;
    for (int i=1;i<=4;i++)
    {
        c=a+b; // 0 1 1 2 3 5
        d=b;
        b=c;
        a=d;
        cout<<a;
        cout<<b;
    }
    return 0;
}