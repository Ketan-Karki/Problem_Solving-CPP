#include<bits/stdc++.h>
using namespace std;
void increasing(int n)
{
    if(n==1)
    {
        cout<<"1\n";
        return;
    }
    increasing(n-1);
    cout<<n<<"\n";
}
void decreasing(int n)
{
    if(n==1)
    {
        cout<<"1\n";
        return;
    }
    cout<<n<<"\n";
    decreasing(n-1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    int n,x;
    cout<<"ENTER THE VALUE OF N\n";
    cin>>n;
    cout<<"ENTER YOUR CHOICE\n1.INCREASING ORDER\n2.DECREASING ORDER\n";
    cin>>x;
    if(x==1)
    {
        increasing(n);
    }
    else if(x==2)
    {
        decreasing(n);
    }
    else
    {
        cout<<"WRONG CHOICE\n";
    }
    return 0;
}
