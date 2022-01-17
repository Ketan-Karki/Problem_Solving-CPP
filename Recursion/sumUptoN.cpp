#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prevsum=sum(n-1);
    return n+prevsum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
