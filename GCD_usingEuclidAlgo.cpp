#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b);
    return 0;
}
