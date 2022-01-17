#include<bits/stdc++.h>
using namespace std;
int d2b(int n)
{
    int ans=0;
    int x=1;
    while(n>0)
    {
        int lastDigit=n%2;
        ans+=lastDigit*x;
        x*=10;
        n/=2;
    }
    return ans;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<d2b(n);
    return 0;
}
