#include<bits/stdc++.h>
using namespace std;
int digitSum(int a)
{
    int sum=0;
    while(a)
    {
        int rem=a%10;
        sum+=rem;
        a=a/10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q,a,n,s;
    cin>>q;
    while(q--)
    {

        cin>>n;
        s=0;
        for(int i=0;i<n;i++)
        {
            cin>>a;
            s=s+digitSum(a);
        }
        if(s%3==0)
        {
            cout<<"Yes\n";
        }
        else
        {
            cout<<"No\n";
        }
    }
    return 0;
}
