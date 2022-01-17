#include<bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    int prev=fact(n-1);
    return n*prev;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}
