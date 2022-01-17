#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int N=100006;
    bool check[N];
    for(int i=0;i<N;i++)
    {
        check[i]=false;
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            check[a[i]]=true;
        }
    }
    for(int i=0;i<N;i++)
    {
        if(check[i]==false)
        {
            cout<<i<<"\n";
            break;
        }
    }
    return 0;
}
