#include<bits/stdc++.h>
using namespace std;
int fact(int a)
{
    int p=1;
    for(int c=2;c<=a;c++)
    {
        p=p*c;
    }
    return p;
}
void pascal(int x)
{
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<fact(i)/(fact(i-j)*fact(j))<<" ";
        }
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    pascal(n);
    return 0;
}
