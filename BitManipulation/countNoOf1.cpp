#include<bits/stdc++.h>
using namespace std;
int counter(int n)
{
    int x=0;
    while(n>0)
    {
        n=(n & n-1);
        x++;
    }
    return x;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    cout<<counter(n);
    return 0;
}
