#include<bits/stdc++.h>
using namespace std;
int b2d(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans+=x*y;
        x*=2;
        n/=10;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    
    int n;
    cin>>n;
    cout<<b2d(n);
    return 0;
}
